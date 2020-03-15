#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace::std;

int main()
{
	int i, n, m;
	int nums[100];
	cin >> n;
	for(int i = 0; i < n; i ++) {
		cin >> nums[i];
	}
	sort(nums, nums + n);
	double last = nums[n - 1];
	for(i = n - 2; i >= 0; i --) { 
		last = 2 * sqrt(last * nums[i]);
	}
	cout<<std::fixed<<std::setprecision(2)<<last<<endl;
}
