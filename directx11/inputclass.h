//------------------------------------------------------------------------------------
// Filename: inputclass.h
// Data: 01.06.2015
//------------------------------------------------------------------------------------

#ifndef _INPUTCLASS_H_
#define _INPUTCLASS_H_

//------------------------------------------------------------------------------------
// Class name: InputClass
//------------------------------------------------------------------------------------
class InputClass
{
public:
	InputClass();
	InputClass(const InputClass&);
	~InputClass();

	void Initialize();

	void KeyDown(unsigned);
	void KeyUp(unsigned);

	bool IsKeyDown(unsigned);

private:
	bool m_keys[256];
};

#endif // !_INPUTCLASS_H_