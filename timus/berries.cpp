#include <iostream>
using namespace::std;

int main()
{
	int a1, b1, a2, b2, a3, b3;
	cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
	int second = b1 - b2;
	int first = a1 - a3;
	cout<<first<<" "<<second<<endl;
}
