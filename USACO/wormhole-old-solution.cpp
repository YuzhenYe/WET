/*
LANG: C++
TASK: wormhole
ID: yuzheny2 
*/
#include <fstream>
#include <iostream>
#include <climits>

using namespace::std;
int pairs(int n) 
{
	if(n == 2) return 1;
	else {
		return (1 + (n - 2)) * pairs(n - 2);
	}
}

bool cycle(int n, int *pair, int *right)
{
	int p, i, j, partner[12];
	for(p = 0; p < n; p += 2) {
		i = pair[p];
		j = pair[p + 1];
		partner[i] = j;
		partner[j] = i;
	}
	int start, end;
	for(i = 0; i < n; i ++) {
		start = i;
		bool thiscycle = true;
		for(int s = 0; s < n; s ++) {
			end = partner[start];
			if(right[end] == -1) { thiscycle = false; break; }
			start = right[end];
		}
		if(thiscycle) return true;
	}
	return false;
}

int main()
{
	int n, x[12], y[12], right[12];
	int i, j, p, q;
	ifstream fin("wormhole.in");
	ofstream fout("wormhole.out");
	fin >> n;
	for(int i = 0; i < n; i ++) {
		fin >> x[i] >> y[i];
	}
        //get closest hole to the right
        for(i = 0; i < n; i ++) {
                right[i] = -1; //-1 no hole to the right
                int rightcod = INT_MAX;
                for(j = 0; j < n; j ++) {
                        if(y[j] == y[i] && x[j] > x[i]) {
                                if(x[j] < rightcod) {
                                        rightcod = x[j];
                                        right[i] = j;
                                }
                        }
                }
        }
	int tryn = 1;
	int maxp = pairs(n);
	int **pairings = new int*[maxp];
	for(int i = 0; i < maxp; i ++) pairings[i] = new int[n];
	//cout<<"n "<<n<<" pair "<<maxp<<endl;
	pairings[0][0] = 0; 
	pairings[0][1] = 1;
	for(int i = 2; i < n; i += 2) {
		int old = tryn;
		for(j = 0; j < old; j ++) {
			pairings[j][i] = i;
			pairings[j][i+1] = i+1;
			for(p = 0; p < i; p += 2) {
				//cout<<"breaking p "<<p<<endl;
				for(q = 0; q < i; q ++) {
					pairings[tryn][q] = pairings[j][q];
					pairings[tryn+1][q] = pairings[j][q];
				}
				//break the pairing (p, p+1)
				pairings[tryn][i] = pairings[tryn+1][i] = pairings[tryn][p+1];
				pairings[tryn][p+1] = i; 
				pairings[tryn][i+1] = i + 1; 
				pairings[tryn+1][p+1] = i + 1; 
				pairings[tryn+1][i+1] = i; 
				tryn += 2;
			}
		}		
	}
	int valid = 0;
	for(int i = 0; i < tryn; i ++) {
		if(cycle(n, pairings[i], right)) { 
			valid += 1;	
			//cout<<"valid"<<endl;
		}
	}
	//cout<<"tryn "<<tryn<<" valid "<<valid<<endl;
	fout<<valid<<endl;
	fout.close();
}
