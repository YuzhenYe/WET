/*
TASK: crypt1
ID: yuzheny2
LANG: C++
*/
#include <fstream>
#include <iostream>
#include <cmath>
#include <string>

using namespace::std;

bool ifvalid(int n, bool *digitgood)
{
	if(n == 0) return false;
	while(n) {
		int d = n % 10; 
		if(!digitgood[d]) return false;
		n /= 10;
	}
	return true;
}

int main()
{
	int i, j, k, n;
	ifstream fin("crypt1.in");
	ofstream fout("crypt1.out");
	fin >> n;
	bool digitgood[10];
	for(i = 0; i < 10; i ++) digitgood[i] = false;
	for(i = 0; i < n; i ++) {
		fin >> j;
		digitgood[j] = true;
	}

	int solution = 0;
	int abc, e, de;
	for(abc = 100; abc < 1000; abc ++) {
		if(!ifvalid(abc, digitgood)) continue;
		int validn = 0;
		int validd[10];
		for(e = 1; e < 10; e ++) {
			if(digitgood[e] && (abc * e <= 999) and (ifvalid(abc * e, digitgood))) {
				validd[validn++] = e;
			}
		}
		for(j = 0; j < validn; j ++) {
			for(k = 0; k < validn; k ++) {
				de = validd[j] * 10 + validd[k];	
				int mult = abc * de;
				if(ifvalid(mult, digitgood)) {
					//cout<<"abc "<<abc<<" de "<<de<<" mult "<<abc * de <<endl;
					solution += 1;
				}
			} 
		}
	}
	fout<<solution<<endl;
}
