#include <iostream>
using namespace::std;

int main()
{
	int i, n;
	cin >> n;
	int *f = new int[n];  	
	for(i = 0; i < n; i ++) cin>>f[i];
	int maxadd = 0;
	int maxi = 0;
	for(i = 1; i < n - 1; i ++) {
		int add = f[i-1]+f[i]+f[i+1];
		if(add > maxadd) {	
			maxadd = add;
			maxi = i;
		}
	}
	cout<<maxadd<<" "<<maxi+1<<endl;
}
