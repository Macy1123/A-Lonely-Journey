// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class A_Lonely_Journey : ModuleRules
{
	public A_Lonely_Journey(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "MotionWarping" });
	}
}
