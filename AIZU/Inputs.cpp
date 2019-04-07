#include <iostream>
using namespace::std;

int main()
{
	int a, b;
	cin >> a >> b;
	cout<<"a "<<a<<" b "<<b<<endl;

	int n = 10;
	for(int i = 0; i < n; i ++) {
		if(i == 2) continue;
		cout<<i<<endl;
	}
	for(int i = 0; i < n; i ++) {
		if(i == 2) break;
		cout<<i<<endl;
	}
	char s1[] = "Hello";
	char s2[] = {'H', 'e', 'l', 'l', 'o', '\0'};         
	string s3 = "Hello";
	for(int i = 0; i < s3.length(); i ++) {
        	cout<<s1[i]<<" "<<s2[i]<<" "<<s3[i]<<endl;
	}
}
