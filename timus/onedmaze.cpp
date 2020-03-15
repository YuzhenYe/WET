#include <iostream>
using namespace::std;

int main()
{
	int i, k, n, e;
	cin >> n >> e;
	int left, right;
	left = -1001;
	right = 1001;
	for(i = 0; i < n; i ++) {
		cin >> k; 
		if(k < 0) {
			if(k > left)  left = k;
		}
		else {
			if(k < right) right = k;
		}
	}
	if(e < 0) {
		if(left > e) cout<<"Impossible"<<endl;
		else cout<<2 * right - e<<" "<<-e<<endl; 
	}
	else {
		if(right < e) cout<<"Impossible"<<endl;
		else cout<<e<<" "<<2 * (-left) + e<<endl; 
		
	}
}
