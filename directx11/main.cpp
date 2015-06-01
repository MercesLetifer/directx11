//------------------------------------------------------------------------------------
// Filename: main.cpp
// Data: 01.06.2015
//------------------------------------------------------------------------------------
#include "systemclass.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR pScmdline, int iCmdShow)
{
	SystemClass* system = new SystemClass;
	if (!system)
		return 0;

	bool result = system->Initialize();
	if (result)
		system->Run();

	system->Shutdown();
	delete system;
	system = nullptr;
}