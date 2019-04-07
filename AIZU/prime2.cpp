#include <iostream>
#include <cmath>
using namespace::std;

int main()
{
	int tot;
	cin >> tot;
	int *nums = new int[tot];
	for(int i = 0; i < tot; i ++) {
		cin >> nums[i];
	}
	int prime = 0;
	for(int i = 0; i < tot; i ++) {
		bool isprime = true;
		for(int d = 2; d <= sqrt(nums[i]); d ++) {
			if(nums[i] % d == 0) {
				isprime = false;
				break;
			}
		}	
		if(isprime) prime += 1;
		//cout<<nums[i]<<" "<<isprime<<endl;
	}
	cout<<prime<<endl;
}
