// arrays as parameters
#include <iostream>
using namespace std;

void PrintArray (int length, int nums[]) 
{
	for (int n=0; n<length; n++)
		cout << nums[n] << ' ';
	cout << '\n';
}

int main ()
{
	int firstarray[] = {5, 10, 15};
	int secondarray[] = {2, 4, 6, 8, 10};
	PrintArray(3, firstarray);
	PrintArray(5, secondarray);
}
