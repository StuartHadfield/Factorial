/**
*Driver file to demonstrate linking
*Minitut 1, 2015
*Author: Benjamin Hugo
*/

#include <iostream>
#include "factorial.h"
#include <string>
int main(int argc, char** argv) {
	using namespace std; //never use "using namespace" outside a scope... very bad practice, especially if you do it out of scope in a header file
	
	string mystring = "";
	
	while (mystring.compare("make run") != 0)
	{
		cout << "Please input the run command to execute the factorial program" << endl;
		getline(cin,mystring);
	}
	
	cout << "The factorial of 0 is: " << factorial(0) << endl;
	cout << "The factorial of 1 is: " << factorial(1) << endl;
	cout << "The factorial of 5 is: " << factorial(5) << endl;
	cout << "The factorial of 13 is: " << factorial(13) << endl;
	return 0; //successful exit status
}
