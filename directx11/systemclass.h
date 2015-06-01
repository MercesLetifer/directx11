//------------------------------------------------------------------------------------
// Filename: systemclass.h
// Data: 01.06.2015
//------------------------------------------------------------------------------------

#ifndef _SYSTEMCLASS_H_
#define _SYSTEMCLASS_H_

//------------------------------------------------------------------------------------
// Preprocessing directives
//------------------------------------------------------------------------------------
#define WIN32_LEAN_AND_MEAN

//------------------------------------------------------------------------------------
// Includes
//------------------------------------------------------------------------------------
#include <Windows.h>

//------------------------------------------------------------------------------------
// My class includes
//------------------------------------------------------------------------------------
#include "inputclass.h"
#include "graphicsclass.h"

//------------------------------------------------------------------------------------
// Class name: SystemClass
//------------------------------------------------------------------------------------
class SystemClass
{
public:
	SystemClass();
	SystemClass(const SystemClass&);
	~SystemClass();

	bool Initialize();
	void Run();
	void Shutdown();

	LRESULT CALLBACK MessageHandler(HWND, UINT, WPARAM, LPARAM);

private:
	bool Frame();
	void InitializeWindows(int&, int&);
	void ShutdownWindows();

private:
	LPCWSTR m_applicationName;
	HINSTANCE m_hinstance;
	HWND m_hwnd;

	InputClass* m_input;
	GraphicsClass* m_graphics;
};

//------------------------------------------------------------------------------------
// Functions prototypes
//------------------------------------------------------------------------------------
static LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

//------------------------------------------------------------------------------------
// Globals
//------------------------------------------------------------------------------------
static SystemClass* ApplicationHandle = nullptr;

#endif	// !_SYSTEMCLASS_H_