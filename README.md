# CSGO Offset Dumper

[![CS:GO on steam](https://img.shields.io/badge/Steam-CS%3AGO-grey?labelColor=black&logo=Steam)](https://store.steampowered.com/app/730/CounterStrike_Global_Offensive/)



An offset dumper for [Counter-Strike: Global Offensive](https://store.steampowered.com/app/730/CounterStrike_Global_Offensive/) written entirely in C#.


### Prerequisites
* [![.NET 6 SDK](https://img.shields.io/badge/.NET-6_SDK-5a25e3)](https://dotnet.microsoft.com/en-us/download/dotnet/6.0)


 
## Features

✔ Compatible with [hazedumper](https://github.com/frk1/hazedumper/blob/master/config.json) & [GH Offset Dumper](https://guidedhacking.com/resources/guided-hacking-offset-dumper-gh-offset-dumper.51/) config files

✔ Signature Offsets Dumper

✔ Netvar Offsets Dumper

✔ Exports all netvar classes and offsets

✔ Cheat Engine Table contains a 'Local Player' section which is readily available to modify any of the local player netvars.

✔ Dumps offsets to the following file formats:
* [C++ (.h)](https://github.com/topics/cpp)
* [C# (.cs)](https://github.com/topics/csharp)
* [JSON (.json)](https://github.com/topics/json) (Also exports min.json which is the json in one line without line breaks)
* [TOML (.toml)](https://github.com/toml-lang/toml)
* [Cheat Engine](https://www.cheatengine.org/)'s Cheat Tables (.ct)

### To Do:

- [ ] Add more types of entities in Cheat Table Export
- [ ] Add Class Inheritance in export using RTTI

## Built With

* [C# .NET 6](https://dotnet.microsoft.com/en-us/download/dotnet/6.0)


### Acknowledgments
* [GH Offset Dumper](https://github.com/guided-hacking/GH-Offset-Dumper)'s massively inspired this.
* [frk1](https://github.com/frk1)'s [hazedumper](https://github.com/frk1/hazedumper)'s config files.
* [Spectre.Console](https://github.com/spectreconsole/spectre.console) for an amazing and easy way to create good looking console apps.
