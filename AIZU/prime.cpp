#include <iostream>

#include <math.h>

using namespace::std;

bool isprime(int facnum, int *fac, int num)
{
	for(int i = 0; i < facnum; i ++) {
		if(fac[i] > sqrt(num)) break;
		if(num % fac[i] == 0) return false;
	}
	return true;
}

int main()
{
	int tot;
	cin >> tot;
	int maxnum = 0;
	int i;
	int nums[10000];
	for(i = 0; i < 10000; i ++) nums[i] = 0;
	i = 0;
	while(i < tot) {
		cin >> nums[i]; 
		if(nums[i] > maxnum) maxnum = nums[i];
		i ++;
	}
	int maxfac = sqrt(maxnum);
	int primes[maxfac];
	int pi = 0;
	for(i = 2; i <= maxfac; i ++) {
		if(isprime(pi, primes, i)) {
			primes[pi ++] = i;
		}	
	}
	int totprime = 0;
	for(i = 0; i < tot; i ++) {
		if(isprime(pi, primes, nums[i])) totprime += 1;
	}
	cout<<totprime<<endl;
}
