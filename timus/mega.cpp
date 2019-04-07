#include <iostream>
using namespace::std;

int main()
{
	int carpermin, minpassed;
	cin >> carpermin >> minpassed;

	int a;
	int remain = 0;
	for(int i = 0; i < minpassed; i ++) {
		cin >> a;
		if(a + remain > carpermin) remain = a + remain - carpermin;
		else remain = 0;
	}
	cout<<remain<<endl;
}
