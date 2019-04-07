#include <iostream>
#include <sstream>
using namespace::std;

int main()
{
	string tmp = "abc";
	for(int i = 0; i < tmp.length(); i ++) {
		if((tmp[i] >= 'a' && tmp[i] <= 'z')) {
			tmp[i] = tmp[i] + 'A' - 'a'; 
		}
	}
	cout<<tmp<<endl;
	bool t = false;
	cout<<t<<endl;
}
