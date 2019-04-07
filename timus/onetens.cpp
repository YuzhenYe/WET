#include <iostream>
using namespace::std;

int find(int n, int *onepos, int num) 
{
	int l = 0;
	int r = n;
	//cout<<"num "<<num<<endl;
	while(l < r) {
		//cout<<" l "<<l<<" r "<<r<<endl;
		int m = (r - l) / 2 + l;
		if(num == onepos[m]) return 1;
		else if(num < onepos[m]) {
			r = m;
		}
		else l = m + 1;
	}
	return 0;
}

int main()
{
	int i, j, n;
	cin >> n;
	int maxn = 0;
	int *num = new int[n];
	for(i = 0; i < n; i ++) { cin>>num[i]; if(num[i] > maxn) maxn = num[i]; }
	int onepos = 1;
	int m = 1;
	while(1) {
		onepos += m;
		if(onepos > maxn) break;
		m ++;
	}
	int *oneposlist = new int[m];
	oneposlist[0] = 1;
	for(j = 1; j < m; j ++) {
		oneposlist[j] = oneposlist[j-1] + j;
		//if(oneposlist[j] > maxn) break;
	}
	for(i = 0; i < n; i ++) {
		int iffind = find(m, oneposlist, num[i]); 
		if(iffind) cout<<"1 ";
		else cout<<"0 ";
	}
	cout<<endl;
	//cout<<"find(1) "<<find(m, oneposlist, 1)<<endl;
}
