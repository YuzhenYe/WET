//comments have no effect on the behavior of the program
//iostream: header iostream, a section of standard C++ code, 
//which allows to perform standard input and output operations
//std is the standard namespace. cout, cin and a lot of other things are defined in it
//using namespace::std; means use std whenever you can
//without this statement, cout -> std::cout
#include <iostream>
using namespace::std;

int main()
{
	//cout: standard output stream (i.e., computer screen)
	// << insertion operator, which indicates that what follows is inserted into cout
	//cin: standard input stream (default is the keyboard)
	// >> store input data to a variable

	cout<<"Type in a number: ";
	int i;
	cin >> i;
	cout<<"You typed in "<<i<<endl;
	return(0);
}
