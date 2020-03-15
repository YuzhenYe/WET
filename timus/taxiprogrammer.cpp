#include <iostream>
using namespace::std;

int main()
{
	int d[5][5];
	int i, j;
	for(i = 0; i < 5; i ++) {
		for(j = 0; j < 5; j ++) {
			cin >> d[i][j];
		}
	}
	int slist[] = {1, 2, 3};
	int tlist[] = {1, 2, 3};
	int flist[] = {1, 3};
	int s0, t0, f0, s, t, f;
	int mindis = 100001;
	int tmp[5];
	tmp[0] = 1; tmp[4] = 5;
	for(s0 = 0; s0 < 3; s0 ++) {
		s = slist[s0];
		for(t0 = 0; t0 < 3; t0 ++) {
			t = tlist[t0];
			if(t == s) continue;
			for(f0 = 0; f0 < 2; f0 ++) {
				f = flist[f0];
				if(f == s || f == t) continue;
				int dtot = d[0][s] + d[s][t] + d[t][f] + d[f][4];
				if(dtot < mindis) {
					mindis = dtot;
					tmp[1] = s + 1;
					tmp[2] = t + 1;
					tmp[3] = f + 1;
				}
			}
		}
	} 
	cout<<mindis<<endl;
	cout<<tmp[0]<<" "<<tmp[1]<<" "<<tmp[2]<<" "<<tmp[3]<<" "<<tmp[4]<<endl;
}
