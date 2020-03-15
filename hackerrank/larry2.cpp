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
		for(i = 1; i <= m; i ++) {
			if(a[i] != i) {	
				for(j = i; j <= m; j ++) {
					if(a[j] == i) break;
				}
				for(k = j; k > i; k --) {
					tmp = a[k-1];
					a[k-1] = a[k];
					a[k] = a[k+1];
					a[k+1] = tmp;	
				}
			}
		}
		if(solution) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
