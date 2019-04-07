#include <iostream>
using namespace::std;

int main()
{
	int i, n, m;
	cin >> n;
	cin >> m;
	int maj_n = m;
	int maj_c = 1;
	for(i = 1; i < n; i ++) {
		cin >> m;
		if(m == maj_n) maj_c ++;
		else {
			maj_c --;
		}
		if(maj_c == 0) {		
			maj_n = m;
			maj_c = 1;
		}
	}
	cout<<maj_n<<endl;
}
