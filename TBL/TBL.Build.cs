using UnrealBuildTool;

public class TBL : ModuleRules {
    public TBL(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AkAudio",
            "AnalyticsCore",
            "AnimGraphRuntime",
            "AnimationCore",
            "AudioExtensions",
            "AudioMixer",
            "AudioPlatformConfiguration",
            "CinematicCamera",
            "ClothingSystemRuntimeInterface",
            "Core",
            "CoreUObject",
            "Engine",
            "GameServerQueryPlugin",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "Landscape",
            "LevelSequence",
            "MediaAssets",
            "MediaUtils",
            "MeshDescription",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "OnlineSubsystem",
            "OnlineSubsystemUtils",
            "PacketHandler",
            "PhysicsCore",
            "PropertyPath",
            "ReplicationGraph",
            "RuntimeAssetCache",
            "ST_SparseGrid",
            "SignificanceManager",
            "Slate",
            "SlateCore",
            "StaggeredUpdater",
            "StaticMeshDescription",
            "TBLLoadingScreen",
            "UMG",
        });
    }
}
