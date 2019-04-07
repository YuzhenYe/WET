#include <iostream>
using namespace::std;

int main()
{
	int nums[500000];
	int count[500000];
	int totn = 0;

	int n, m;
	cin >> n;
	int i, j;
	for(i = 0; i < n; i ++) {
		cin >> m;
		for(j = 0; j < totn; j ++) {		
			if(m == nums[j]) break;
		}
		if(j == totn) {
			nums[totn] = m;
			count[totn] = 1;
			totn ++;
		}
		else {
			count[j] ++;
		}
	}
	int maxi;
	maxi = 0;	
	for(i = 1; i < totn; i ++) {
		if(count[i] > count[maxi]) maxi = i;
	}
	cout<<nums[maxi]<<endl;
}
