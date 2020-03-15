#include <iostream>
using namespace::std;

int main()
{
	int i, t;
	int n[1000]; 
	cin >> t;
	for(i = 0; i < t; i ++) cin >> n[i];
	int pivot = n[0];
	for(i = 1; i < t; i ++) {
		if(n[i] < pivot) cout<<n[i]<<" ";
	}
	cout<<pivot<<" ";
	for(i = 1; i < t; i ++) {
		if(n[i] > pivot) cout<<n[i]<<" ";
	}
	cout<<endl;
}
