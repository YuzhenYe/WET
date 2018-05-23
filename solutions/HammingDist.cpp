#include <iostream>
using namespace::std;

int main()
{
	string s1 = "ABCDE";
	string s2 = "ABCDA";
	int dist = 0;
	for(int i = 0; i < s1.length(); i ++) {
		if(s1[i] != s2[i]) dist ++;
	}
	cout<<"distance between two strings "<<s1<<" "<<s2<<" is "<<dist<<endl;
	return(0);
}
