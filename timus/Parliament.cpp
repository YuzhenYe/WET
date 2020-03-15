#include <iostream>
using namespace::std;

void divide(int *n, int a, int b) {
	int k;
	for(k = a; k < b - 1; k ++) 
		if(n[k] > n[b - 1]) break;	
	if(b - 1 > k) divide(n, k, b - 1);
	if(k > a) divide(n, a, k);
	cout<<n[b - 1]<<endl;
}

int main()
{
	int t;
	int n[3000]; 
	cin >> t;
	for(int i = 0; i < t; i ++) cin >> n[i];
	divide(n, 0, t);
}
