#include <iostream>
using namespace::std;

int main()
{
	int n, a, b, ca[301], cb[301];
	int i, c;
	cin >> n >> a >> b;
	for(c = 1; c <= a; c ++) {
		ca[c] = 0;
	}
	for(c = 1; c <= b; c ++) {
		cb[c] = 0;
	}
	ca[1] = cb[1] = 1;

	long long ca_add, cb_add;
	for(i = 2; i <=n; i ++) {
		cb_add = ca_add = 0;
		for(c = 1; c <= a; c ++) ca_add += ca[c];
		for(c = 1; c <= b; c ++) cb_add += cb[c];
		//cout<<"i "<<i<<" last ca_add "<<ca_add<<" last cb_add "<<cb_add<<endl;
		for(c = a; c >= 1; c --) {
			if(c == 1) {
				ca[c] = cb_add % 1000000007;
			}
			else {
				ca[c] = ca[c - 1] % 1000000007;
			}
		}
		for(c = b; c >= 1; c --) {
			if(c == 1) {
				cb[c] = ca_add % 1000000007;
			}
			else {
				cb[c] = cb[c - 1] % 1000000007;
			}
		}
	}
	long long sol = 0;
	for(c = 1; c <= a; c ++) sol += ca[c];
	for(c = 1; c <= b; c ++) sol += cb[c];
	cout<<sol % (1000000007)<<endl;
}
