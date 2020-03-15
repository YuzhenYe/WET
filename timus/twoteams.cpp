#include <iostream>
using namespace::std;

int n;
int f[100][100];
int assigned[100];

void dfs(int i, int team)
{
	assigned[i] = team;
	for(int j = 0; j < n; j ++) {
		if(f[i][j] == 1 && assigned[j] == -1) {
			dfs(j, !team);
		}
	}
}

int main()
{
	cin >> n;
	int i, j, t;
	for(i = 0; i < n; i ++) {
		for(j = 0; j < n; j ++) {
			f[i][j] = 0;
		}
	}
	for(i = 0; i < n; i ++) {
		while(1) {
			cin >> t;
			if(t == 0) break;
			f[i][t - 1] = f[t - 1][i] = 1;	
		}
	}
	for(i = 0; i < n; i ++) assigned[i] = -1;
	int team = 0;
	for(i = 0; i < n; i ++) {
		if(assigned[i] != -1) continue; 
		dfs(i, team);
	}
	int tmp[100];
	int tot = 0;
	for(i = 0; i < n; i ++) {
		if(assigned[i] == 0) {
			tmp[tot ++] = i;
		}
	}
	if(tot == 0 || tot == n) cout<<0<<endl;
	else {
		cout<<tot<<endl;
		for(i = 0; i < tot; i ++) {
			cout<<tmp[i] + 1<<" ";
		}
		cout<<endl;
	}
}
