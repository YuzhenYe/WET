#include <iostream>
#include <cmath>
using namespace::std;

int mod(int x, int n, int m)
{
	if(n <= 1) return x % m;
	else return (mod(x, n - 1, m) * x) % m;
}

int main()
{
	int n, m, y;
	cin >> n >> m >> y;
	int found = 0;	
	for(int x = 0; x < m; x ++) {
/*
		int r = pow(x, n);
		int d = r % m;
		//cout<<"x "<<x<<" "<<r<<" "<<d<<endl;
		if(d == y) {
*/
		if(mod(x, n, m) == y) {
			cout<<x<<" ";
			found ++;
		}
	}
	if(!found) cout<<-1<<endl;
}
