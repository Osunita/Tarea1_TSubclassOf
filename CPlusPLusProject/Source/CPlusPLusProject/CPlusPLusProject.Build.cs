// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CPlusPLusProject : ModuleRules
{
	public CPlusPLusProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateDependencyModuleNames.AddRange(new string[] { "Niagara" });
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
