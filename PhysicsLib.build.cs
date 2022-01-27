using System;
using System.IO;
using UnrealBuildTool;

public class PhysicsLib : ModuleRules
{
    public PhysicsLib(ReadOnlyTargetRules Target) : base(Target)
    {
        Type = ModuleType.External;

        if (Target.Platform == UnrealTargetPlatform.Win32 || Target.Platform == UnrealTargetPlatform.Win64)
        {
            PublicDefinitions.Add("WITH_PHYSICSLIB=1");
            PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "include"));
            PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "bin", "Release", "physics.lib"));
        }
        else if (Target.Platform == UnrealTargetPlatform.Mac)
        {
            PublicDefinitions.Add("WITH_PHYSICSLIB=1");
            PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "include"));
            PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "bin", "libphysics.a"));
        }
        else
        {
            PublicDefinitions.Add("WITH_PHYSICSLIB=0");
        }
    }
}
