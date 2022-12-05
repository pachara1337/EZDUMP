using System.Diagnostics;
using System.Net;
using System.Text.Json;
using EZDUMP.JsonClasses;
using Spectre.Console;
namespace EZDUMP
{
    internal class Program
    {
        /// <summary>
        /// The location of the configuration file the signatures and netvars are saved in.
        /// </summary>
        const string configFilePath = "config.json";
        /// <summary>
        /// The Process ID of CSGO
        /// </summary>
        public static int ProcessID { get; private set; }
        /// <summary>
        /// Field to get the offset of dwGetAllClasses from the signature scan. (We must start signature scan first before netvar scan because netvars require this signature.
        /// </summary>
        private static int dwGetAllClassesOffset => Signatures.FirstOrDefault(x => x.Key.Equals("dwGetAllClasses")).Value;
        private static Dictionary<string, int> Signatures = new();
        private static Dictionary<string, int> Netvars = new();
        private const string clientdll = "client.dll";

        static void Main(string[] args)
        {
            Console.Title = "EZDUMP | pachara#6666";
            AppConfig.InitConfig();
            AnsiConsole.Write(new FigletText("EZDUMP").LeftAligned().Color(Color.Magenta1));

            if (!File.Exists(configFilePath))
            {
                AnsiConsole.MarkupLine($"[red][[Error]] Could not find {configFilePath}! Downloading config from {AppConfig.CurrentConfig.FallbackConfigURL}![/]");
                new WebClient().DownloadFile(AppConfig.CurrentConfig.FallbackConfigURL, configFilePath);
            }


            Config.Rootobject? config = JsonSerializer.Deserialize<Config.Rootobject>(File.ReadAllText(configFilePath));

            AnsiConsole.MarkupLine($"[purple]Loading [green]{config.netvars.Length}[/] netvars and [green]{config.signatures.Length}[/] signatures[/]");

            AnsiConsole.MarkupLine($"[white]Trying to find {config.executable}[/]");

            Process[] csgoproc = Process.GetProcessesByName(Path.GetFileNameWithoutExtension(config.executable));

            if (csgoproc.Length > 0)
            {
                ProcessID = csgoproc[0].Id;
                AnsiConsole.MarkupLine($"[cyan]Found {csgoproc[0].ProcessName}.exe = {ProcessID}[/]");

                AnsiConsole.MarkupLine("[white]Trying to get process handle[/]");

                Win32.ProcessHandle = Win32.OpenProcess(0x0008 | 0x0010 | 0x0020, false, ProcessID);

                if (Win32.ProcessHandle != IntPtr.Zero)
                {
                    AnsiConsole.MarkupLine($"[cyan]Found Proccess Handle = 0x{Win32.ProcessHandle.ToString("X")}[/]");

                    AnsiConsole.MarkupLine($"[white]Searching for {clientdll}[/]");
                    var clientModule = Win32.GetModule((IntPtr)ProcessID, clientdll);
                    if (clientModule != null)
                    {
                        string path = clientModule.Value.szExePath;

                        AnsiConsole.MarkupLine($"[cyan]Found {clientdll} = {path}[/]");

                        AnsiConsole.MarkupLine($"[white]Trying to load {clientdll}[/]");
                        IntPtr internalClientDll = Win32.LoadLibrary(path);
                        if (internalClientDll != IntPtr.Zero)
                        {
                            AnsiConsole.MarkupLine($"[cyan]Loaded {clientdll} = 0x{internalClientDll}[/]");

                            PatternScan.GetSignatureOffsets(config.signatures, ref Signatures);

                            AnsiConsole.MarkupLine($"[cyan]Finished getting signatures![/]");

                            IntPtr dwGetallClassesAddr = internalClientDll + dwGetAllClassesOffset;

                            var allClasses = dwGetAllClasses.ClassExporter.GetAllClasses(dwGetallClassesAddr);

                            SDK.Netvar.GetNetvarOffsets(config.netvars, ref Netvars, dwGetallClassesAddr);


                            AnsiConsole.MarkupLine($"[cyan]Found [blue]{Netvars.Count}/{config.netvars.Length}[/] netvars and [blue]{Signatures.Count}/{config.signatures.Length}[/] signatures[/]");

                            //Dumps netvars and signatures
                            Dumper.DumpCPP(Netvars, Signatures, config.filename);
                            Dumper.DumpCSharp(Netvars, Signatures, config.filename);
                            Dumper.DumpJson(Netvars, Signatures, config.filename);
                            Dumper.DumpTOML(Netvars, Signatures, config.filename);
                            Dumper.DumpCheatTable(Netvars, Signatures, config.filename, allClasses);


                            //Dumps all netvar classes
                            Dumper.DumpJson(allClasses);
                            Dumper.DumpCPP(allClasses);


                            AnsiConsole.MarkupLine("");
                            AnsiConsole.MarkupLine("");
                            AnsiConsole.MarkupLine($"[bold purple]EZDUMP![/]");
                        }
                    }
                }
            }
            else
            {
                AnsiConsole.MarkupLine($"[red][[Error]] Could not find {config.executable}! try to run the game before dump[/]");
            }

            Console.ReadLine();

        }
    }
}