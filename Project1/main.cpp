#include "StaticClass.h"
#include "Parser.h"
#include "class2.h"
#include <iostream>
#include <fstream>
#include <string>
#include "rapidjson/document.h"
# include <conio.h>
using namespace std;
using namespace rapidjson;
int main()
{
	Parser::GetInstance().loadInFile("data.ini");
	getch(); // pause to look at output

	return 0;
}