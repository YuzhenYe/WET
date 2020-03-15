#include <iostream>
#include <cstring>
using namespace::std;

int main()
{
	int n;
	int a[101][101];
	cin >> n;
	memset(a, 0, sizeof(a));
	int i, j, tmp;
	//cout<<endl<<"check "<<endl;
	for(i = 1; i <= n; i ++) {
		for(j = 1; j <= n; j ++) {
			cin >> tmp;
			a[i][j] = a[i-1][j] + tmp;
			//cout<<a[i][j]<<" ";
		}
		//cout<<endl;
	}
	int maxsum = a[1][1];  
	int ifnew = 1;
	int h, l, c;
	for(h = 0; h < n; h ++) {
		for(l = h + 1; l <= n; l ++) {
			int sum = 0;
			for(c = 1; c <= n; c ++) {
				sum += a[l][c] - a[h][c];			
				if(sum > maxsum) maxsum = sum;
				if(sum < 0) sum = 0;
			}
		}
	}
	cout<<maxsum<<endl;
}
