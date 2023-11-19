using UnrealBuildTool;

public class AnimationSharing : ModuleRules {
    public AnimationSharing(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AudioExtensions",
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
