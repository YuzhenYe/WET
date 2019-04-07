#include <iostream>
using namespace::std;

int majority(int a, int b, int *nums)
{
	if(b == a + 1) return nums[a];
	else {
		int m, n1, n2, t1, t2;
		m = (b - a) / 2 + a;
		n1 = majority(a, m, nums); 	
		n2 = majority(m, b, nums);
		if(n1 == n2) return n1;
		else {
			t1 = 0;
			t2 = 0;
			for(int i = a; i < b; i ++) {
				if(nums[i] == n1) t1 ++;
				else if(nums[i] == n2) t2 ++;
			}	
			if(t2 > t1) return n2;
			else return n1;
		}
	}
}

int main()
{
	int nums[500000];
	int n, m;
	cin >> n;
	int i, j;
	for(i = 0; i < n; i ++) {
		cin >> nums[i];
	}
	int k = majority(0, n, nums);
	cout<<k<<endl;
}
