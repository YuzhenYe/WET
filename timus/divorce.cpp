#include <iostream>
using namespace::std;

int main()
{
	string tmp;
	cin >> tmp;
	string substr = "";
	int n = 0;
	for(int i = tmp.length() - 1; i >= 0; i --)  {
		substr = tmp[i] + substr; 	
		if((substr.length() == 6) || (i == 0)) {
			n += stoi(substr);
			substr = "";
		}
	}
	cout<<n % 7<<endl;
}
