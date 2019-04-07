#include <iostream>
using namespace::std;
int n, p[15000];
int binary(int q) 
{
	int left = 0;
	int right = n;
	while(left < right) {
		int m = (right - left) / 2;	
		if(q == p[m]) return m;
		else if(q > p[m]) left = m + 1;
		else right = m;
	}
	return -1;
}

int main()
{
	int i, m, j;
	cin >> n;
	for(i = 0; i < n; i ++) {
		cin >> p[i];
	}
	cin >> m;
	int s;
	int c = 0;
	for(i = 0; i < m; i ++) {
		cin >> s;
		int f = binary(s);
		if(f != -1) c += 1;
	}
	cout<<c<<endl;
}
