#include <iostream>
#include <algorithm>
using namespace::std;

int main()
{
	int i, k, g[101];
	cin >> k;
	for(i = 0; i < k; i ++) {
		cin >> g[i];
	}
	sort(g, g + k);
	int add = 0;
	int n = k / 2;
	if(2 * n <= k) n ++;
	for(i = 0; i < n; i ++) {
		int h = g[i] / 2;
		if(2 * h <= g[i]) h += 1;
		add += h;
	}	
	cout<<add<<endl;
}
