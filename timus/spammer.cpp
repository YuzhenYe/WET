#include <iostream>
using namespace::std;

int main()
{
	int i, j, n;
	string names[100];
	bool considered[100];
	cin >> n;
	for(i = 0; i < n; i ++) {
		cin >> names[i];
		considered[i] = false;
	}
	for(i = 0; i < n; i ++) {
		if(considered[i]) continue;
		int a = 1;
		for(j = i + 1; j < n; j ++) {
			if(names[j] == names[i]) {
				considered[j] = true;
				a ++;
			}
		}
		if(a >= 2) cout<<names[i]<<endl;
	}
}
