@echo off
call "%~dp0\..\congig.bat"

set TARGET_TYPE=Client
set MODULE_NAME=%ProjectPureName%
set TargetFileName=%MODULE_NAME%%TARGET_TYPE%.Target.cs
set TargetFilePath=%SourceCodePath%\%TargetFileName%

call "%~dp0\create_target.bat"