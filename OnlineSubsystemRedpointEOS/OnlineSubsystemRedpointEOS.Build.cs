using UnrealBuildTool;

public class OnlineSubsystemRedpointEOS : ModuleRules {
    public OnlineSubsystemRedpointEOS(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AudioExtensions",
            "AudioMixer",
            "AudioPlatformConfiguration",
            "ClothingSystemRuntimeInterface",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "Landscape",
            "MeshDescription",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "OnlineSubsystem",
            "OnlineSubsystemUtils",
            "PacketHandler",
            "PhysicsCore",
            "PropertyPath",
            "Slate",
            "SlateCore",
            "StaticMeshDescription",
            "UMG",
        });
    }
}
