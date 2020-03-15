//For integers x and y, if x ≥ y, then gcd(x, y) = gcd(y, x%y)
#include <iostream>
using namespace::std;
int gcd(int x, int y)
{
	if(x % y == 0) return y;
	return gcd(y, x % y);
}

int main()
{
	int n, m;
	cin >> n >> m;
	if(n > m) cout<<gcd(n, m)<<endl;
	else cout<<gcd(m, n)<<endl;
}
