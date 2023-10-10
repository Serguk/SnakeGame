@echo off

call "%~dp0\..\config.bat"

start "" "%EnginePath_5.2%\Engine\Binaries\Win64\UnrealEditor.exe" "%ProjectPath%" -run=DerivedDataCache -fill