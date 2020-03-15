#include <iostream>
#include <algorithm>
using namespace::std;

int main()
{
	int i, n;
	cin >> n;
	int d[10000];
	int t = 0;

	int m = n;
	while(m > 1) {
		for(i = 9; i > 1; i --) {
			if(m % i == 0) break;
		}
		if(i == 1) break; 
		d[t ++] = i;
		m = m / i;
	}	
	if(n == 0) cout<<"10"<<endl;
	else if(n == 1) cout<<"1"<<endl;
	else if(t == 0) cout<<"-1"<<endl;
	else {
		if(m > 9) cout<<"-1"<<endl;
		else {
			sort(d, d+t);
			for(i = 0; i < t; i ++) {
				cout<<d[i];
			}
			cout<<endl;
		}
	}
}
