#include <iostream>
using namespace::std;

int main()
{
	int n;
	cin >> n;

	for(int i = 1; i <= 1000000000; i ++) {
		int mult = 1;
		int m = i;
		while(m > 0) {
			int r = m % 10;
			m = m / 10;
			mult *= r; 
		}
		if(mult == n) {
			cout << i << endl;
			return 0;
		}
	}
	cout<<"-1"<<endl;
}
