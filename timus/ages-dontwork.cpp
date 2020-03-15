#include <iostream>
using namespace::std;

int char2int(char s)
{
	if(s >= 'A') return(s - 'A' + 10); 
	else return(s - '0');
}

int main()
{
	string s;
	cin >> s;
	int mink = -1;
	int maxd = 2;
	for(int i = 0; i < s.length(); i ++) {
		int d = char2int(s[i]);
		//cout<<"char "<<s[i]<<" int "<<d<<endl;
		if(maxd < d) maxd = d;  
	}
	for(int k = maxd; k <= 36; k ++) { 
		long long mult = 1;
		long long n = 0;
		for(int i = s.length() - 1; i >= 0; i --) {
			int b = char2int(s[i]);
			n += b * mult; 	
			mult *= k;
		}
		if((n % (k - 1)) == 0) {
			mink = k;
			break;
		}
	}
	if(mink == -1) cout<<"No solution."<<endl;
	else cout<<mink<<endl;
}
