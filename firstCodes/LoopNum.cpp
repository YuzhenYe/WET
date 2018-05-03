#include <iostream>

using namespace::std;

int main() 
{
	int nums[7] = {1, 3, 4, 67, 199, 20, 20}; 
	int count = 7;
	int sum = 0;
	for(int i = 0; i < count; i ++)  {
		sum += nums[i];
		cout<<" add " << nums[i] << " sum "<<sum<<endl;
	}
	cout<<" sum "<<sum<<endl;
}
