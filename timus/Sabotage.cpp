#include <iostream>
using namespace::std;

int main()
{
	int i, n, m;
	int s[25001], a[25001];
	int s2[25001], a2[25001];
	int t = 25000;
	for(i = 0; i <= t; i ++) {
		a[i] = a2[i] = s[i] = s2[i] = 0;
	}

	cin >> n;
	for(i = 0; i < n; i ++) {
		cin >> m;
		s[m] ++;
	}

	a[t] = s[t];
	s2[a[t]] ++;
	for(i = t - 1; i > 0; i --) {
		a[i] = a[i + 1] + s[i];
		s2[a[i]] ++;
	}

	a2[t] = s2[t];
	for(i = t - 1; i > 0; i --) {
		a2[i] = a2[i + 1] + s2[i];
	}
	for(i = 1; i <= t; i ++) {
		if(a2[i] == 0) break;
		cout<<a2[i]<<endl;
	}
}
