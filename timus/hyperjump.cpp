#include <iostream>
using namespace::std;

int main()
{
	int n, m;
	cin >> n;
	int b = 0;
	int s = 0;
	int maxs = 0;
	for(int i = 0; i < n; i ++) {
		cin >> m;
		s += m;
		if(s > maxs) {
			maxs = s;
		}
		if(s < 0) s = 0;
	}
	cout<<maxs<<endl;
}
