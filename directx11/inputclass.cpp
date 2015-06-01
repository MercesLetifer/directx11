//------------------------------------------------------------------------------------
// Filename: inputclass.cpp
// Data: 01.06.2015
//------------------------------------------------------------------------------------
#include "inputclass.h"

InputClass::InputClass() { }
InputClass::InputClass(const InputClass &other) { }
InputClass::~InputClass() { }

void InputClass::Initialize()
{
	for (int i = 0; i < 256; ++i)
		m_keys[i] = false;
}

void InputClass::KeyDown(unsigned input)
{
	m_keys[input] = true;
}

void InputClass::KeyUp(unsigned input)
{
	m_keys[input] = false;
}

bool InputClass::IsKeyDown(unsigned key)
{
	return m_keys[key];
}