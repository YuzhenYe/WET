#include <iostream>
using namespace::std;

void crunch(int n, int *crunched, int *nums)
{
	int i;
	for(i = 0; i < n; i ++) {
		if(crunched[i] == 0) break;
	}
	if(i == n) { //all numbers are crunched
		int p1, p2;
		p1 = p2 = 0;
		for(int j = 0; j < n; j ++) {
			if(crunched[j] == 1) p1 += nums[j];
			else p2 += nums[j];
		}
		cout<<p1<<" "<<p2<<endl;
	}
	else { //i-th number is not crunched yet
		crunched[i] = 1; //i-th number crunched by cruncher #1
		crunch(n, crunched, nums);
		crunched[i] = 2; //i-th number crunched by cruncher #2
		crunch(n, crunched, nums);
		crunched[i] = 0; //reset i-th number (not crunched) -- this is important 
	}
}

int main()
{
	int i, n;
	cin >> n;
	int *nums = new int[n];
	int *crunched = new int[n];
	for(i = 0; i < n; i ++) cin >> nums[i];
	for(i = 0; i < n; i ++) crunched[i] = 0;
	crunch(n, crunched, nums);
}
