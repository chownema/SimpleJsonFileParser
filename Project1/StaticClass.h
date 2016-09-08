// COMP710 GP 2D Framework
#ifndef __STATICCLASS_H__
#define __STATICCLASS_H__

#include <string>
using namespace std;

class StaticClass
{
	//Member Methods:
public:
	static StaticClass& GetInstance();
	~StaticClass();

protected:

private:
	StaticClass();
	StaticClass(const StaticClass& staticClass);
	StaticClass& operator=(const StaticClass& staticClass);

	//Member Data:
public:
	int integer;
	string stringValue;
protected:
	static StaticClass* sm_pInstance;

private:

};

#endif //__STATICCLASS_H__
