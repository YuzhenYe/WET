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

bool cycle(int n, int *partner, int *right)
{
	int i, start, end;
	//cout<<"check cycle"<<endl;
	//for(i = 0; i < n; i ++) {
	//	cout<<"partner: "<<i<<" "<<partner[i]<<endl;
	//}
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

int pairing(int n, int *partner, int *right)
{
	int i, j;
	for(i = 0; i < n; i ++) {
		if(partner[i] == -1) break;
	}
	if(i == n) { //every one is paired, then check cycle
		if(cycle(n, partner, right)) return 1;
		else return 0;
	}
	int total = 0;
	for(j = i + 1; j < n; j ++) {
		if(partner[j] != -1) continue;
		partner[i] = j;
		partner[j] = i;
		total += pairing(n, partner, right);
		partner[i] = -1; //done, reset to -1
		partner[j] = -1;
	}
	return total;
}

int main()
{
	int i, j, n, x[12], y[12], right[12], partner[12];
	ifstream fin("wormhole.in");
	ofstream fout("wormhole.out");
	fin >> n;
	for(i = 0; i < n; i ++) {
		fin >> x[i] >> y[i];
	}
	fin.close();
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
	for(i = 0; i < n; i ++) partner[i] = -1;
	int valid = pairing(n, partner, right); 
	//cout<<"tryn "<<tryn<<" valid "<<valid<<endl;
	fout<<valid<<endl;
	fout.close();
}
