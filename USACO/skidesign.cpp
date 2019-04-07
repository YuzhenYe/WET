/*
TASK: skidesign
ID: yuzheny2
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <climits>

using namespace::std;

int main()
{
	int n;
	int elev[1000];
	ifstream fin("skidesign.in");
	fin >> n;
	for(int i = 0; i < n; i ++) fin >> elev[i];
	fin.close();
	int mincost = INT_MAX;
	int low, high, thiscost;
	for(low = 0; low < 100 - 17; low ++) {
		high = low + 17;
		thiscost = 0;
		for(int i = 0; i < n; i ++) {
			if(elev[i] < low) {
				thiscost += (low - elev[i]) * (low - elev[i]);
			}		
			else if(elev[i] > high) {
				thiscost += (elev[i] - high) * (elev[i] - high);
			}
		}
		if(mincost > thiscost) mincost= thiscost; 
	} 
	ofstream fout("skidesign.out");
	fout<<mincost<<endl;
	fout.close();
	return 0;
}
