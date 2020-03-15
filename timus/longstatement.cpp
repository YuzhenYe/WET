#include <iostream>
using namespace::std;

int main()
{
	int i, n, m;
	cin >> n;
	int c[3] = {0, 0, 0};
	for(i = 0; i < n; i ++) {	
		cin >> m;	
		c[m-1] ++;
	}
	int u = 0;
	m = 0;
	for(i = 0; i < 3; i ++) {
		if(c[i] > 0) u ++;
		if(c[i] > m) m = c[i];
	}
	if(u == 1) cout<<"No"<<endl;
	else if(u == 3) cout<<"Yes"<<endl;
	else {	
		if(n >= 6) cout<<"Yes"<<endl;
		else if(n >= 4 && m < n - 1) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}
