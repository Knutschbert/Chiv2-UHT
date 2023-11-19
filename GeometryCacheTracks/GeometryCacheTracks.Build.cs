using UnrealBuildTool;

public class GeometryCacheTracks : ModuleRules {
    public GeometryCacheTracks(ReadOnlyTargetRules Target) : base(Target) {
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
            "GeometryCache",
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
