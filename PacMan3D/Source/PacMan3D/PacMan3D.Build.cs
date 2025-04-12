// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PacMan3D : ModuleRules
{
	public PacMan3D(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "AIModule", "NavigationSystem", "EnhancedInput" });
	}
}
