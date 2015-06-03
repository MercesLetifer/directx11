//------------------------------------------------------------------------------------
// Filename: graphicsclass.h
// Data: 01.06.2015
//------------------------------------------------------------------------------------

#ifndef _GRAPHICSCLASS_H_
#define _GRAPHICSCLASS_H_

//------------------------------------------------------------------------------------
// My class includes
//------------------------------------------------------------------------------------
#include "d3dclass.h"

//------------------------------------------------------------------------------------
// Globals
//------------------------------------------------------------------------------------
const bool FULL_SCREEN = false;
const bool VSYNC_ENABLED = true;
const float SCREEN_DEPTH = 1000.0f;
const float SCREEN_NEAR = 0.1f;

//------------------------------------------------------------------------------------
// Class name: GraphicClass
//------------------------------------------------------------------------------------
class GraphicsClass
{
public:
	GraphicsClass();
	GraphicsClass(const GraphicsClass&);
	~GraphicsClass();

	bool Initialize(int, int, HWND);
	void Shutdown();
	bool Frame();

private:
	bool Render();

private:
	D3DClass* m_D3D;

};

#endif // !_GRAPHICSCLASS_H_