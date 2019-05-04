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
	//this is a cubic time complexity version
	//straightforward, and super easy to implement
	//unfortunately, it is VERY slow for big n
	for(int i = 0; i < n; i ++) { //i -- all possible end transaction
		for(int j = i; j < n; j ++) {
			int add = 0;
			for(int k = i; k <= j; k ++) {
				add += records[k];
			}
			if(add > answer) {
				answer = add;
			}
		}
	}
	cout<<answer<<endl;
	return 0;
}
