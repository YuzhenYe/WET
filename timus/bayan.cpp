#include <iostream>
using namespace::std;

int main()
{
	int i, j, n;
	string names[1000], str;
	getline(cin, str);
	n = stoi(str);
	int count[1000];
	int tot = 0;
	for(int i = 0; i < n; i ++) {
		getline(cin, str);
		for(j = 0; j < tot; j ++) {
			if(str == names[j]) break;
		}
		if(j == tot) {
			names[tot] = str;
			count[tot] = 1;
			tot ++;
		}
		else {
			count[j] ++;
		}
	}
	int unvisited = 0;
	for(i = 0; i < tot; i ++) {
		//cout<<i<<"#"<<names[i]<<"# "<<count[i]<<endl;
		if(count[i] > 1) unvisited += count[i] - 1;
	}
	cout<<unvisited<<endl;
}
