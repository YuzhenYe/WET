#include <iostream>
using namespace::std;

int main()
{
	int i, j, k, n, m;
	cin >> n >> m;
	int a[10001];
	for(i = 0; i < n; i ++) {
		cin >> a[i]; 
	}
	for(j = m; j < m + 10; j ++) {
		k = a[j % n];
		cout<<k;
	}
	cout<<endl;
}
