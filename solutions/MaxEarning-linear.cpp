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
	int add = 0;
	for(int i = 0; i < n; i ++) { //i -- all possible end transaction
		add += records[i];
		if(add > answer) {
			answer = add;
		}
		//by resetting add to 0, no need to explictly use an extra loop to try all possible start 
		if(add < 0) {
			add = 0;
		}
	}
	cout<<answer<<endl;
	return 0;
}
