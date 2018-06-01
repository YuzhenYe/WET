#include <iostream>
#include <fstream>
using namespace::std;

int main(int argc, char* argv[])
{
	string s1;
	string s2;
	if(argc < 2) {
		cout<<argv[0]<<" file-name"<<endl;
		return 0;
	}
	ifstream file(argv[1]);
	if(file.is_open()) {
		getline(file, s1);
		getline(file, s2);
	}
	int dist = 0;
	for(int i = 0; i < s1.length(); i ++) {
		if(s1[i] != s2[i]) dist ++;
	}
	cout<<"distance between two strings "<<s1<<" "<<s2<<" is "<<dist<<endl;
	return(0);
}
