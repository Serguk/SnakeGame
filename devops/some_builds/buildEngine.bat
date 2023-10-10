set MS_BUILD_PATH=C:\Program Files\Microsoft Visual Studio\2022\Community\MSBuild\Current\Bin\MSBuild.exe
set BUILD_DIR=C:\Epic Games\Sources\UE_5.2
set PLATFORM=Win64
set CONFIGURATION=Development Editor
set VERBOSITY=diagnostic
start "%MS_BUILD_PATH%" "%BUILD_DIR%\UE5.sln" -target:"Engine\UE5" -property:Platform="%PLATFORM%";Configuration="%CONFIGURATION%" -verbosity:"%VERBOSITY%"