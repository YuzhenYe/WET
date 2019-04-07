#include <iostream>
using namespace::std;

int main() {
	string str;
	getline(cin, str);
	int a = (int) 'a';
	int z = (int) 'z';
	int A = (int) 'A';
	int Z = (int) 'Z';
	for(int i = 0; i < str.length(); i ++) {
		int n = (int) str[i];
		if(n >= a && n <= z) cout<<(char) (n + (A - a));
		else if(n >= A && n <= Z) cout<<(char) (n + (a - A));
		else cout<<str[i];
	}
	cout<<endl;
	cout<<"a "<<a<<"A "<<A<<endl;
}
