#include <iostream>
using namespace::std;
int main()
{
	int s, n, m, i, j, k, tmp, a[1001];
	bool solution;
	cin >> n;
	for(s = 0; s < n; s ++) {
		cin >> m;
		for(i = 1; i <= m; i ++) {
			cin >> a[i];
		}
		solution = true;
		int diff = 0;
		for(i = 1; i <= m; i ++) {
			if(a[i] > i) diff += a[i] - i;
		}
		if(diff % 2 == 0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
