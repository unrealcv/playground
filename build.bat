@echo Set the environment variable UE4 in the console or in the system variables
@echo For example in my machine, I use "set UE4=D:\Epic Games\4.14\"
@echo Or "set UE4=C:\Program Files (x86)\Epic Games\4.14"
@echo Editor code won't be built by this script, need to make sure the editor code already exists
"%UE4%\Engine\Build\BatchFiles\RunUAT.bat" BuildCookRun -project=%CD%/playground.uproject -archivedirectory=%CD%/built -noP4 -platform=Win64 -clientconfig="DevelopmentEditor" -serverconfig=Development -allmaps -stage -pak -archive -build -cook
