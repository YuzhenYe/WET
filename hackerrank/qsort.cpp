#include <iostream>
using namespace::std;

void display(int *a, int n)
{
	for(int i = 0; i < n; i ++) cout<<a[i]<<" ";
	cout<<endl;
}

void partition(int *a, int left, int right)
{
	int p = left;
	int l = left;
	int r = right - 1;
	int tmp;
	int k = 0;
	//cout<<"before"<<endl;
	//display(a + left, right - left);
	while(l < r) {
		while((a[r] > a[p]) && (r > l)) r --;
		while((a[l] <= a[p]) && (l < r)) l ++;
		//cout<<"left="<<l<<" "<<"right="<<r<<endl;
		if(l < r) {
			tmp = a[l];
			a[l] = a[r]; 
			a[r] = tmp; 
			r --;
		}
	}
	tmp = a[p];
	a[p] = a[l];
	a[l] = tmp;
	k = l;

	//cout<<"after"<<endl;
	//display(a + left, right - left);
	if(k - 1 > left) partition(a, left, k);
	if(right > k + 2) partition(a, k + 1, right);

	display(a + left, right - left);
}

int main()
{
	int i, t;
	int n[1000]; 
	cin >> t;
	for(i = 0; i < t; i ++) cin >> n[i];
	partition(n, 0, t);
	//cout<<"sorted"<<endl;
	//display(n, t);
}
