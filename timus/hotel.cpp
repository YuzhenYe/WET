#include <iostream>
using namespace::std;

int main()
{
	int table[100][100];
	int i, j, n, x, y, e;
	cin >> n;
	int m = n * n;
	int s = 0;
	x = 0;
	for(y = n - 1; y >= 0; y --) {
		for(e = 0; e < n; e ++) {
			s += 1;
			table[x + e][y + e] = s;
			if(x + e >= n - 1 || y + e >= n -1 ) break;
		}
	} 
	y = 0;
	for(x = 1; x < n; x ++) {
		for(e = 0; e < n; e ++) {	
			s += 1;
			table[x + e][y + e] = s;
			if(x + e >= n - 1 || y + e >= n -1 ) break;
		}
	} 
	//cout<<"s "<<s<<endl;
	for(i = 0; i < n; i ++) {
		for(j = 0; j < n - 1; j ++) {	
			cout<<table[i][j]<<" ";	
		}
		cout<<table[i][n-1]<<endl;
	}
}
