#include <iostream>
#include <algorithm>
using namespace::std;

int main()
{
	int i, n;
	cin >> n;	
	int *d = new int[n];
	for(i = 0; i < n; i ++) cin >> d[i];
	//sort(d, d + n);
	int a = 0;
	long long *left = new long long[n + 1];
	left[n] = 0;
	for(i = n - 1; i >= 0; i --) {
		left[i] = left[i + 1] + d[i]; 
	}
	long long t = 0;
	for(i = 0; i < n; i ++) {
		t += d[i] * d[i];
		//left[i + 1] weight, d[i] * 2
		t += left[i + 1] * d[i] * 2;
	}
	delete[] d;
	delete[] left;
	cout<<t<<endl;
}
