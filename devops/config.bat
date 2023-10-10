@echo off

rem Engine params
set EnginePath_4.26=c:\Program Files\Epic Games\UE_4.26
set EnginePath_5.1=c:\Program Files\Epic Games\UE_5.1
set EnginePath_5.2=c:\Program Files\Epic Games\UE_5.2

set UBTRelativePath4=Engine\Binaries\DotNET\UnrealBuildTool.exe
set UBTRelativePath5=Engine\Binaries\DotNET\UnrealBuildTool\UnrealBuildTool.exe
set VersionSelector=c:\Program Files (x86)\Epic Games\Launcher\Engine\Binaries\Win64\UnrealVersionSelector.exe

rem !! Engine version for package !!
set RunUATPath=%EnginePath_5.2%\Engine\Build\BatchFiles\RunUAT.bat

rem Project params
set ProjectRoot=c:\JenkinsJobs\Games\UnrealTPSGame
set ProjectPureName=TPS
set ProjectName=TPS.uproject
set ProjectPath=%ProjectRoot%\%ProjectName%

rem Build params
set Platform=Win64
set Configuration=Development
set ArchivePath=%ProjectRoot%\Build

rem Other params
set SourceCodePath=%ProjectRoot%\Source
set dirsToRemove=DerivedDataCache Intermediate Saved Binaries .vs Build
set filesToRemove=*.sln

rem Target params
set COPYRIGHT_LINE=// Copyright Epic Games, Inc. All Rights Reserved.
set EXTRA_MODULE_NAMES="%ProjectPureName%"
set TargetTemplateFilePath=%ProjectRoot%\devops\targets\EditorModule.Target.cs.template

rem Run
set ServerExePath=%ProjectRoot%\Build\WindowsServer\%ProjectPureName%Server.exe
set ClientExePath=%ProjectRoot%\Build\WindowsClient\%ProjectPureName%Client.exe
set GameExePath=%ProjectRoot%\Build\WindowsNoEditor\%ProjectPureName%.exe