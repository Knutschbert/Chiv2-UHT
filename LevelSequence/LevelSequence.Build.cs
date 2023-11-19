using UnrealBuildTool;

public class LevelSequence : ModuleRules {
    public LevelSequence(ReadOnlyTargetRules Target) : base(Target) {
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
            "MediaAssets",
            "MediaUtils",
            "MeshDescription",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
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
