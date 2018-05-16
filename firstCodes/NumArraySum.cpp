#include <iostream>
using namespace::std;

int main()
{
	int nums[10] = {3, 4, 5, 10, 78, 2, 1, 4, 90, 100};
	int result = 0;
	//for(int num:nums) {
	for(int i = 0; i < 10; i ++) {
		result += nums[i];
	}
	cout << "the sum is " << result << endl;

	return(0);
}
