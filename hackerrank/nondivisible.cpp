#include <iostream>
#include <algorithm>

using namespace::std;

typedef struct {
	int num;
	int count;
} remainder;

bool comp(remainder r1, remainder r2)
{
	return r1.count > r2.count;	
}

int main()
{
	int i, n, k, w, r0;
	remainder r[100];
	for(i = 0; i < 100; i ++) { r[i].num = i; r[i].count = 0; }
	cin >> n >> k;
	for(i = 0; i < n; i ++) {
		cin >> w;
		r0 = w % k;
		r[r0].count ++;
	}
	if(r[0].count > 1) { r[0].count = 1; }
	if(k % 2 == 0 && r[k / 2].count > 1) r[k / 2].count = 1; 

	sort(r, r + k, comp);
	int maxs = 0;
	int include[100];
	int add = 0; 
	int j, r1, r2;
	for(i = 0; i < k; i ++) {
		//cout<<"r = "<<r[i].num<<" "<<r[i].count<<endl;	
		r1 = r[i].num;
		for(j = 0; j < add; j ++) {
			r2 = r[include[j]].num;
			if((r1 + r2) % k == 0) break;
		}
		if(j == add) {
			//cout<<"add"<<endl;
			include[add ++] = i;
			maxs += r[i].count;
		}	
	}
	cout<<maxs<<endl;	
}
