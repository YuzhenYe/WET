#include <iostream>
using namespace::std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int min = a - b - c;
	if(a - b * c < min) min = a - b * c;
	cout<<min<<endl;
}
