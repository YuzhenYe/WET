#include <iostream>
using namespace::std;

int main()
{
	int i, n, m;
	cin >> n >> m;
	for(i = 1; i < n; i ++) {
		cout<<i<<" ";
	}
	cout<<n<<endl;
	int maxdiff = n + 1;
	int b = n + 1;
	for(i = 1; i < m; i ++) {
		b += maxdiff;
		cout<<b<<" ";

	}
	cout<<b + maxdiff<<endl;
}

