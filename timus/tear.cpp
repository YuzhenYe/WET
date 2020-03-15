#include <iostream>
using namespace::std;

int main()
{
	int i, n, a, add, maxn;
	cin >> n;
	add = 0;
	maxn = -1;
	for(i = 0; i < n; i ++) {
		cin >> a;	
		if(a > maxn) maxn = a;
		add += a;
	}
	cout<<add + maxn<<endl;
}
