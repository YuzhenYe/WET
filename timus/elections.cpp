#include <iostream>
using namespace::std;

int main()
{
	int n, m;
	cin >> n >> m;
	int *counts = new int[n];
	int i, w;
	for(i = 0; i < n; i ++) counts[i] = 0;
	for(i = 0; i < m; i ++) {
		int w;
		cin >> w;
		counts[w - 1] ++;
	} 
/*
	sort(counts, counts + n); 
	for(i = n - 1; i >= 0; i --) {
		printf("%.2f%%\n", counts[i] * 100.0 / m);	
	}
*/
	for(i = 0; i < n; i ++) {
		printf("%.2f%%\n", counts[i] * 100.0 / m);	
	}
}
