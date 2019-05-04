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
		int add = 0;
		for(int j = i; j < n; j ++) {
			//to calculate the sum of the numbers from nums[i] to [j]
			//no need to restart from nums[i] each time as in MaxEarning-cubic.cpp 
			//we can get rid of the extra loop in MaxEarning-cubic.cpp
			add += records[j];
			if(add > answer) {
				answer = add;
			}
		}
	}
	cout<<answer<<endl;
	return 0;
}
