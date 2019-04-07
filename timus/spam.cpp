#include <iostream>
using namespace::std;

int main()
{
	string inp;
	getline(cin, inp);
	//cout<<inp<<endl;
	int cost = 0;
	for(int i = 0; i < inp.length(); i ++) {
		char a = inp[i];	
		if((a <= 'z') && (a >= 'a')) cost += (a - 'a') % 3 + 1;
		else if(a == ' ') cost += 1;
		else if(a == '.') cost += 1;
		else if(a == ',') cost += 2;
		else if(a == '!') cost += 3;
		else if(a == '_') cost += 1;
	}
	cout<<cost<<endl;
}
