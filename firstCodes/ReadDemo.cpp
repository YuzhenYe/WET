#include <iostream>
#include <fstream>
using namespace::std;

int main(int argc, char* argv[])
{
	if(argc < 2) {
		cout<<"Usage: "<<argv[0]<<" file-name"<<endl;
		return 0;
	}
	ifstream file(argv[1]);
	string line;
	if(file.is_open()) {
		while(getline(file, line)) {
			cout<<line<<endl;
		}
		file.close();
	}
	else {
		cout<<"unable to open file "<<argv[1]<<endl;
	}
	return 0;
}
