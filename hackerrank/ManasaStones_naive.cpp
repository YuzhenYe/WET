#include <iostream>
#include <algorithm>
using namespace::std;

int lastlist[10000];
int add = 0;

void enumerate(int *choose, int n, int a, int b)
{
	int i, k;
	for(i = 0; i < n; i ++) {
		if(choose[i] == 0) break; //no decision has been made for i
	}
	if(i == n) {
		int last = 0;
		//cout<<"diff selected: [";
		for(k = 0; k < n; k ++) {
			last += choose[k];
			//cout<<choose[k]<<" ";
		}
		for(k = 0; k < add; k ++) {
			if(lastlist[k] == last) break;
		}
		if(k == add) lastlist[add ++] = last;
	}
	else {
		choose[i] = a;
		enumerate(choose, n, a, b);
		choose[i] = b;
		enumerate(choose, n, a, b);
		choose[i] = 0; //important
	}
}

int main()
{
	int t;
	cin >> t;
	int i, n, a, b, j, k, diff, lastdiff, u;
	int maxab, minab;
	int choose[1000];
	for(i = 0; i < t; i ++) {
		cin >> n >> a >> b;
		maxab = (a > b)?a:b;
		minab = (a < b)?a:b;	
		for(j = 0; j < n; j ++) choose[j] = 0;
		add = 0;
		enumerate(choose, n - 1, minab, maxab);
		sort(lastlist, lastlist + add);
		for(k = 0; k < add; k ++) {
			cout<<lastlist[k]<<" ";
		}
		cout<<endl;
	}
}
