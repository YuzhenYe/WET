#include <iostream>
#include <cmath>
#include <algorithm>

using namespace::std;

int main()
{
	int n, m;
	cin >> n >> m;
	bool diag[1001][1001];
	int i, j;
	for(i = 0; i <= n; i ++) {
		for(j = 0; j <= m; j ++) diag[i][j] = 0;	
	} 
	int k;
	cin >> k;
	for(i = 0; i < k; i ++) {
		int x, y;
		cin >> x >> y;
		diag[x - 1][y - 1] = true;
	}
	int ndiag[1001][1001];
	for(i = 0; i <= n; i ++) ndiag[i][0] = 0;
	for(j = 0; j <= m; j ++) ndiag[0][j] = 0;
	for(i = 1; i <= n; i ++) {
		for(j = 1; j <= m; j ++) {
			ndiag[i][j] = max(ndiag[i-1][j], ndiag[i][j-1]);
			if(diag[i-1][j-1]) ndiag[i][j] = max(ndiag[i][j], ndiag[i-1][j-1] + 1);
		}
	}
	int used = ndiag[n][m];
	double dis = used * sqrt(2) * 100 + (n + m - 2 * used) * 100;
	cout<<round(dis)<<endl;
}
