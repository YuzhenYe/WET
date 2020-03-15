#include <iostream>
using namespace::std;

int main()
{
	int n, k, w;
	cin >> n >> k;
	int d0[18];
	int d1[18];
	d0[0] = 0;
	d1[0] = k - 1;
	for(w = 1; w < n; w ++) {
		d0[w] = d1[w-1];
		d1[w] = (d0[w - 1] + d1[w - 1]) * (k - 1); 
	}
	cout<<d0[n - 1] + d1[n - 1]<<endl;
}
