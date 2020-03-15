#include <iostream>
using namespace::std;

int main()
{
	int t;
	cin >> t;
	int i, n, a, b, j, k, diff, lastdiff, u;
	int maxab, minab;
	for(i = 0; i < t; i ++) {
		cin >> n >> a >> b;
		maxab = (a > b)?a:b;
		minab = (a < b)?a:b;	
		lastdiff = 0;
		for(j = 0; j < n; j ++) {
			k = n - j - 1;
			diff = maxab * j + minab * k;
			if(diff != lastdiff) {
				cout<<diff<<" ";
				lastdiff = diff;
			}
		}
		cout<<endl;
	}
}
