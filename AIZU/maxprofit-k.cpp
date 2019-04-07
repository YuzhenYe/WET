#include <iostream>
#include <cmath>
using namespace::std;

int main()
{
	int days, k;
	cin >> days >> k;
	cout<<"days "<<days<<" k "<<k<<endl;
	int *values = new int[days + 1];
	int i, j, m;
	values[0] = 0;
	for(i = 1; i <= days; i ++) cin >> values[i];
	int *maxprofit = new int[k];
	int **profit = new int*[k + 1];
	for(i = 0; i <= k; i ++) {
		profit[i] = new int[days + 1];
	}

	//basis
	for(i = 0; i <= days; i ++) profit[0][i] = 0; //no transaction
	for(i = 0; i <= k; i ++) profit[i][0] = 0; //day 0
	int maxp;
	for(i = 1; i <= k; i ++) {
		for(j = 1; j <= days; j ++) {
			//sell on day j
			maxp = INT_MIN;
			for(m = 1; m < j; m ++) { //buy on day m and sell on day j
				maxp = max(maxp, (values[j] - values[m]) + profit[i-1][m-1]);
			}
			//profilt[i][j-1], don't sell at day j
			profit[i][j] = max(profit[i][j-1], maxp);
		}
	}
	maxp = INT_MIN;
	for(i = 1; i <= k; i ++) {
		maxp = max(maxp, profit[i][days]);
	}
	cout<<maxp<<endl;
}
