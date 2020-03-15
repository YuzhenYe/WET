#include <iostream>
#include <iomanip>
using namespace::std;

int main()
{
	int n, t, s, stime;
	cin >> n >> t >> s;
	for(int i = 0; i < n; i ++) {
		cin >> stime;
		int diff = stime - s;
		if(diff > 0) {
			cout<<fixed<<setprecision(6)<<s + diff + (t - diff) / 2.0<<endl;	
		}
		else {
			diff = -diff;
			cout<<fixed<<setprecision(6)<<s + (t - diff) / 2.0<<endl;	
		}
	}
}
