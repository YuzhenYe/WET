#include <iostream>
using namespace::std;

int main()
{
	int n;
	cin >> n;
	int *records = new int(n);
	for(int i = 0; i < n; i ++) {
		cin >> records[i];	
	}
	int answer = -1000000000;
	int last = 0;
	for(int i = 0; i < n; i ++) { //i -- all possible end transaction
		last += records[i];
		if(last > answer) {
			answer = last;
		}
		//by resetting last, no need explictly use a loop to try all possible start 
		if(last < 0) {
			last = 0;
		}
	}
	cout<<answer<<endl;
	return 0;
}
