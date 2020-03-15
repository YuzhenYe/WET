#include <iostream>
using namespace::std;

int main()
{
	int n, m;
	cin >> n;
	int divide = 0;
	for(int i = 0; i < n; i ++) {
		cin >> m;
		if(m > 1) {
			int split = m / 2; 
			divide += split;
		}
	}
	if(divide % 2 == 0) cout<<"Stannis"<<endl;
	else cout<<"Daenerys"<<endl;
}
