/*
ID: yuzheny2
TASK: milk2
LANG: C++
*/
#include <iostream>
#include <fstream>
using namespace::std;

int main()
{
	ifstream fin("milk2.in");
	ofstream fout("milk2.out");

	int maxtime = 1000000;
	int *milking = new int[maxtime]; 
	for(int i = 0; i < maxtime; i ++) milking[i] = 0;	
	int n, s, e, i, j;
	fin >> n;
	for(i = 0; i < n; i ++) {
		fin >> s >> e;	
		for(j = s; j < e; j ++) 
			milking[j] = 1;
	}
	int longestmilk = 0;
	int longestidle = 0;
	e = 0;
	for(i = 0; i < maxtime; i ++) {	
		if(milking[i]) {
			if((i == 0) || (milking[i-1]==0)) {
				s = i;
				if(e != 0) {
					if(s - e > longestidle) longestidle = s - e;
				}
			}
		}
		else {
			if((i > 0) && milking[i-1]==1) {
				e = i;
				if(e - s > longestmilk) longestmilk = e - s;
			}
		}
	}
	fout<<longestmilk<<" "<<longestidle<<endl;
}
