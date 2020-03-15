#include <iostream>
using namespace::std;

int main()
{
	int copied = 1;
	int n, k;
	cin >> n >> k;
	int t = 0;
	while((copied < k) && (copied < n)) {
		copied += copied;
		t ++;
	}
	if(copied < n) {
		int m = n - copied;
		if((m % k) != 0) t += m / k + 1;
		else t += m / k;
	}
	cout<<t<<endl;
}
