#include <iostream>
using namespace::std;

int main()
{
	int i, j, n;
	cin >> n;
	int counts[100];
	for(i = 0; i < 100; i ++) {
		counts[i] = 0;	
	}
	for(i = 0; i < n; i ++) {
		cin >> j;
		counts[j - 600] ++;
	}
	int a = 0;
	for(i = 0; i < 100; i ++) {
		a += int(counts[i] / 4); 
	} 	
	cout<<a<<endl;
}
