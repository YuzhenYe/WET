/*
TASK: palsquare
ID: yuzheny2
LANG: C++
*/
#include <iostream>
#include <fstream>
using namespace::std;

string transform(int n, int b) 
{
	string s;
	string code = "0123456789ABCDEFGHIGKLMN";
	while(n > 0) {
		int r = n % b; 
		//cout<<"n "<<n<<" r "<<r<<endl;
		n = n / b;
		s = code[r] + s;
	}
	//cout<<s<<endl;
	return s;
}

bool ispal(string s) {
	int n = s.length();
	for(int i = 0; i < n / 2; i ++) {
		if(s[i] != s[n - 1 - i]) return false;
	}
	return true;
}

int main()
{
	int b;
	ifstream fin("palsquare.in");	
	ofstream fout("palsquare.out");	
	fin >> b;
	//string s = transform(2, b);
	for(int i = 1; i <= 300; i ++) {
		string s = transform(i * i, b);
		if(ispal(s)) fout<<transform(i, b)<<" "<<s<<endl;
	}
}
