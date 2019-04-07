#include <iostream>
using namespace::std;

int main()
{
	int n, k;
	cin >> n >> k;
	int t = (2*n) / k;
	int r = (2*n) % k;
	if(r > k) t += 2;
	else if(r > 0) t += 1;
	if(t < 2) t = 2;
	cout<<t<<endl;
}
