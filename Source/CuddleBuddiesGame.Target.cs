// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class CuddleBuddiesGameTarget : TargetRules
{
	public CuddleBuddiesGameTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("CuddleBuddiesGame");
	}
}
