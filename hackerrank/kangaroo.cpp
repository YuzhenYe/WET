#include <iostream>
using namespace::std;

int main()
{
	int x1, x2, v1, v2;
	cin >> x1 >> v1 >> x2 >> v2;
	if(v1 < v2) cout<<"NO"<<endl;
	else {
		bool find = false;
		while(x1 < x2) {
			x1 += v1;
			x2 += v2;
			if(x1 == x2) {
				find = true;
				break;
			}
		}
		if(find) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
