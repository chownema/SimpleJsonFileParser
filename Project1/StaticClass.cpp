// COMP710 GP 2D Framework

// This include:
#include "StaticClass.h"

// Library includes:
#include <Windows.h>

// Static Members:
StaticClass* StaticClass::sm_pInstance = 0;

StaticClass&
StaticClass::GetInstance()
{
	if (sm_pInstance == 0)
	{
		sm_pInstance = new StaticClass();
	}

	return (*sm_pInstance);
}

StaticClass::StaticClass()
{

}

StaticClass::~StaticClass()
{

}	