#include <iostream>
using namespace::std;

int n, k;
int sol = 0;

void assigndigits(int *assigned)
{
	int i, j, b;
	for(i = 0; i < n; i ++) {
		if(assigned[i] == -1) break;	
		if(i > 0 && assigned[i] == 0 && assigned[i-1] == 0) return; //invalid
	}
	if(i < n) {
		if(i == 0) b = 1;
		else b = 0;
		for(j = b; j < k; j ++) {
			assigned[i] = j;
			//cout<<"assign i "<<i<<" "<<j<<endl;
			assigndigits(assigned);
			assigned[i] = -1;
		}
	}
	else sol += 1;
}

int main()
{
	int assigned[18];
	cin >> n >> k;
	for(int i = 0; i < n; i ++) assigned[i] = -1;
	assigndigits(assigned);	
	cout<<sol<<endl;
}
