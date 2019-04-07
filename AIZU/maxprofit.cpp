#include <iostream>
using namespace::std;

int main()
{
	int tot;
	cin >> tot;
	int values[200000];
	for(int i = 0; i < tot; i ++) cin >> values[i];
	int minvalue;
	if(values[0] < values[1]) minvalue = values[0];
	else minvalue = values[1];
	int maxprofit = values[1] - values[0];
	for(int i = 2; i < tot; i ++) {
		if(values[i] - minvalue > maxprofit) {
			maxprofit = values[i] - minvalue;
		}
		if(values[i] < minvalue) minvalue = values[i];
	}
	cout<<maxprofit<<endl;
}
