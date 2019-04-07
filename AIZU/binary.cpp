#include <iostream>
using namespace::std;

int main()
{
	int tot;
	int *nums = new int[tot];
	cin >> tot;
	for(int i = 0; i < tot; i ++) {
		cin >> nums[i];
	}
	int qn;
	cin >> qn;
	int totfound = 0;
	int query;
	int left, right, mid;
	for(int i = 0; i < qn; i ++) {
		cin >> query;
		left = 0;
		right = tot - 1;
		bool iffound = false;
		//cout<<"Now check "<<query<<endl;
		while(left <= right) {
			mid = (right - left) / 2 + left;
			//cout<<left<<" "<<right<<" "<<mid<<" "<<nums[mid]<<endl;
			if(nums[mid] == query) {
				iffound = true;
				break;
			}
			else if(nums[mid] < query) { 
				left = mid + 1;	
			}
			else {
				right = mid - 1;
			}
		}
		if(iffound) totfound += 1;
	}
	cout<<totfound<<endl;
}
