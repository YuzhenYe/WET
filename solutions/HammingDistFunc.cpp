#include <iostream>
using namespace::std;

int getHammingDist(string s1, string s2)
{
	int dist = 0;
	for(int i = 0; i < s1.length(); i ++) {
		if(s1[i] != s2[i]) dist ++;
	}
	return dist;
}

int main()
{
	string str1 = "ABCDE";
	string str2 = "BCDEA";
	int d = getHammingDist(str1, str2);
	cout<<"distance between two strings "<<str1<<" "<<str2<<" is "<<d<<endl;

	str1 = "ATCGABCDE";
	str2 = "ATCGBCDEA";
	d = getHammingDist(str1, str2);
	cout<<"distance between two strings "<<str1<<" "<<str2<<" is "<<d<<endl;
	return 0;
}
