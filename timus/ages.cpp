//x. (x is the second to the right-most digit)
//xk = xk - x + x = x(k - 1) + x
//x.. (x is the third to the right-most digit)
//xk*k = xk*k - xk + xk = xk(k-1) + xk = xk(k-1) + x(k-1) + x
//and so on
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
	int maxd = 1;
	for(int i = 0; i < s.length(); i ++) {
		int d = char2int(s[i]);
		//cout<<"char "<<s[i]<<" int "<<d<<endl;
		if(maxd < d) maxd = d;  
	}
	if(maxd < 10) maxd += 1;
	for(int k = maxd; k <= 36; k ++) { 
		int n = 0;
		for(int i = s.length() - 1; i >= 0; i --) {
			int b = char2int(s[i]);
			n += b; 	
		}
		if((n % (k - 1)) == 0) {
			mink = k;
			break;
		}
	}
	if(mink == -1) cout<<"No solution."<<endl;
	else cout<<mink<<endl;
}
