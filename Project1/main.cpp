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
	// EXAMPLE ::

	// Load in the data from a certain file
	// This file is located in the project development folder
	Parser::GetInstance().loadInFile("data.json");

	// Load in a json object
	const Value& json = Parser::GetInstance().document["data"];
	
	// Set some variables with data inside that json object
	// Lets get Foo
	string foo = json["foo"].GetString();
	// Print out foo
	cout << "foo : " << foo << endl;
	
	// Lets get my age
	int myAge = json["my_age"].GetInt();
	// Print out my age
	cout << "my age :" << myAge << endl;

	// Lets get my Employment Status!
	bool employment = json["employment"].GetBool();
	// Lets print it out! :)
	cout << "Am I Employed: " << employment << endl;

	cout << "someone hire me :(" << endl;

	getch(); // pause to look at output

	return 0;
}