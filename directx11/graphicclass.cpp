//------------------------------------------------------------------------------------
// Filename: graphicclass.cpp
// Data: 01.06.2015
//------------------------------------------------------------------------------------
#include "graphicsclass.h"

GraphicsClass::GraphicsClass() { }
GraphicsClass::GraphicsClass(const GraphicsClass &other) { }
GraphicsClass::~GraphicsClass() { }

bool GraphicsClass::Initialize(int screenWidth, int screenHeight, HWND hwnd)
{
	return true;
}

void GraphicsClass::Shutdown()
{

}

bool GraphicsClass::Frame()
{
	return true;
}

bool GraphicsClass::Render()
{
	return true;
}