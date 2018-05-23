#include <iostream>
using namespace::std;

int getMin(int* nums, int len)
{
	int smallest = nums[0];
	for(int i = 1; i < len; i ++)
		if(nums[i] < smallest) smallest = nums[i];
	return smallest;
}

int main()
{
	int nums1[6] = {2, 4, 5, 10, 1000, 23};
	int s1 = getMin(nums1, 6);
	cout<<"smallest number is "<<s1<<endl;
	int nums2[10] = {2, 4, 5, 10, 1000, 23, 4, -1, 3, 5};
	int s2 = getMin(nums2, 10);
	cout<<"smallest number is "<<s2<<endl;
	return 0;
}
