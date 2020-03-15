#include <iostream>
using namespace::std;

int main()
{
	int t, i, j;
	int leftmost, rightmost;
	cin >> t;
	int *n = new int[t];
	for(i = 0; i < t; i ++) {
		cin >> n[i];
	}
	if(t == 2) {
		cout<<"yes"<<endl<<"swap 1 2"<<endl;
		return 0;
	}
	for(i = 0; i < t - 1; i ++) {
		if(n[i] > n[i + 1])  { 
			int inversion = 0;
			int minp = i;
			for(j = i + 1; j < t; j ++) {
				if(n[j] < n[minp]) minp = j;
				if(n[j] < n[j - 1]) inversion ++;
			}
			//cout<<"i="<<i<<" minp="<<minp<<" "<<n[minp]<<" inversion="<<inversion<<endl;
			if((inversion <= 2) && ((minp == t - 1) || (n[i] < n[minp + 1]))) {
				cout<<"yes"<<endl;
				cout<<"swap "<<i + 1<<" "<<minp + 1<<endl;
			}
			else if((inversion == minp - i) && ((minp == t - 1) || (n[i] < n[minp + 1])) && ((i == 0) || (n[minp] > n[i - 1]))) {
				cout<<"yes"<<endl;
				cout<<"reverse "<<i + 1<<" "<<minp + 1<<endl;	
			}
			else {
				cout<<"no"<<endl;
			}
			break;
		}
	}
}
