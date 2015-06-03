//------------------------------------------------------------------------------------
// Filename: graphicclass.cpp
// Data: 01.06.2015
//------------------------------------------------------------------------------------
#include "graphicsclass.h"

GraphicsClass::GraphicsClass()
{ 
	m_D3D = nullptr;
}
GraphicsClass::GraphicsClass(const GraphicsClass &other) { }
GraphicsClass::~GraphicsClass() { }

bool GraphicsClass::Initialize(int screenWidth, int screenHeight, HWND hwnd)
{
	m_D3D = new D3DClass;
	if (!m_D3D)
		return false;

	bool result = m_D3D->Initialize(screenWidth, screenHeight, VSYNC_ENABLED, hwnd, FULL_SCREEN,
		SCREEN_DEPTH, SCREEN_NEAR);
	if (!result)
	{
		MessageBox(hwnd, L"Couldn't initialize Direct3D", L"Error", MB_OK);
		return false;
	}

	return true;
}

void GraphicsClass::Shutdown()
{
	if (m_D3D)
	{
		m_D3D->Shutdown();
		delete m_D3D;
		m_D3D = nullptr;
	}
}

bool GraphicsClass::Frame()
{
	// render the graphic scene
	bool result = Render();
	if (!result)
		return false;

	return true;
}

bool GraphicsClass::Render()
{
	// clear the buffers to begin the scene
	m_D3D->BeginScene(0.5f, 0.5f, 0.5f, 1.0f);

	// present the rendered scene to the screen
	m_D3D->EndScene();

	return true;
}