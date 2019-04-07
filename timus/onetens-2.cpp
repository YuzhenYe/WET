#include <iostream>
#include <cmath>
#include <climits>
using namespace::std;

unsigned int trym(unsigned int m) {
	return (m * (m-1)) / 2 + 1;
}

int main()
{
/*
	for(int i = 0; i < 1000; i ++) {
		cout<<i<<" "<<trym(i)<<endl;
	}
	unsigned int maxn = pow(2, 32) - 1;
	unsigned tryn = sqrt((maxn - 1) * 2);	
	cout<<"MAX_INT "<<INT_MAX<<endl;
	cout<<"maxn "<<maxn<<" guess "<<tryn<<" "<<trym(tryn)<<" "<<trym(tryn+1)<<endl;
*/
	int n;
	cin >> n;
	char digit;
	unsigned m;
	for(int i = 0; i < n; i ++) {
		cin >> m;
		int k = sqrt((m - 1) * 2);
		if(trym(k) == m) digit = '1';
		else if	(trym(k + 1) == m) digit = '1';
		else if	(trym(k - 1) == m) digit = '1';
		else digit = '0';
		//cout<<"num "<<m<<" guess "<<k<<" "<<trym(k)<<" "<<trym(k-1)<<" "<<trym(k+1)<<" digit "<<digit<<endl;
		if(i == 0) cout<<digit;
		else cout<<" "<<digit;
	}
	cout<<endl;
}
