//this code is to demonstrate different ways of feeding data to the program 
#include <iostream>
#include <fstream>
using namespace::std;

int main(int argc, char *argv[]) {
	//pass parameters into the program when it is called 
	if(argc < 2) {
		cout << "Usage: " << argv[0] << " number" << endl;
		exit(0);
	}
	int num = atoi(argv[1]);
	cout<< "you gave " << num << endl;

	//user provides information when the programm is running
	//cin: The Standard Input Stream; >> stream extraction operator
	string something;
	cout << "you can also provide information (e.g., a number) here: " << endl;
	cin >> something;
	cout << "you typed in " << something << endl;

	//let the program get data from a file
	string filename;
	cout << "filename please: " << endl;
	cin >> filename;
	string data;
	ifstream infile(filename); //open file
	infile >> data;	 //read from the file
	infile.close(); //close the file
	cout << " read from the file " << data << endl;
	
	return(0);
}
