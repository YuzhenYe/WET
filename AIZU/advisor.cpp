#include <iostream>
using namespace::std;

int gcd(int x, int y) {
	if (x % y == 0) return y;
	else return gcd(y, x % y);
}

int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	//cout<<"a " <<a<<" b "<<b<<endl;
	int d = gcd(a, b);	
	cout<<d<<endl;
}
