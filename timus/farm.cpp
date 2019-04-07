#include <iostream>
#include <cmath>
using namespace::std;

int main()
{
	int n, a, b, c;
	cin >> n;
	int found = false;
	//cout<<"pow(2, 3) "<<pow(2, 3)<<endl;
	for(a = 1; a <= 100; a ++) {
		for(b = a + 1; b <= 100; b ++) {
			for(c = b + 1; c <= 100; c ++) {
				if(pow(a, n) + pow(b, n) == pow(c, n)) {
					found = true;
					cout<<a<<" "<<b<<" "<<c<<endl;
					break;
				}
			}
			if(found) break;
		}
		if(found) break;
	}
	if(!found) cout<<-1<<endl;
}
