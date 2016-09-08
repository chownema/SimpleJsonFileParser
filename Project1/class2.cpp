#include "StaticClass.h"
#include "class2.h"

class2::class2(){

}

class2::~class2(){

}
int
class2::returnPlusOne() {
	return 1 + StaticClass::GetInstance().integer;
}