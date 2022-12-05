﻿namespace EZDUMP
{
    internal class AppConfig
    {

        private const string ConfigPath = "csgodumperconfig.json";

        public static ConfigObj CurrentConfig;
        public static void InitConfig()
        {
            if (!File.Exists(ConfigPath))
                File.WriteAllText(ConfigPath, System.Text.Json.JsonSerializer.Serialize(new ConfigObj()));

            CurrentConfig = System.Text.Json.JsonSerializer.Deserialize<ConfigObj>(File.ReadAllText(ConfigPath));
        }
        public static void SaveConfig() => File.WriteAllText(ConfigPath, System.Text.Json.JsonSerializer.Serialize(CurrentConfig));
        public class ConfigObj
        {
            public string ExportNamespace { get; set; } = "EZDUMP";
            public string FallbackConfigURL { get; set; } = "https://raw.githubusercontent.com/frk1/hazedumper/master/config.json";

            //These are the Source classes to include under LocalPlayer, CCSPlayer and all the classes it inherits
            public string[] LocalPlayerClasses { get; set; } = new string[] { "CBaseEntity", "CBaseAnimating", "CBaseAnimatingOverlay", "CBaseFlex", "CBaseCombatCharacter", "CBasePlayer", "CCSPlayer" };
        }

    }
}
