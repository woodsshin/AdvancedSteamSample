// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class SteamSample_413Target : TargetRules
{
	public SteamSample_413Target(TargetInfo Target) : base(Target)
    {
		Type = TargetType.Game;
        bUsesSteam = true;

        ExtraModuleNames.AddRange(new string[] { "SteamSample_413" });
    }
}
