/*
ID: yuzheny2
LANG: C++
TASK: friday
*/

#include <iostream>
#include <fstream>
using namespace::std;

int month2day(int y, int m)
{
	if(m == 2) { //Feb
		bool leap = false;
		if(y % 100 == 0) {
			if(y % 400 == 0) leap = true;
		}
		else if(y % 4 == 0) leap = true;
		if(leap) return 29;
		else return 28;
	}
	else if(m == 4 || m == 6 || m == 9 || m == 11) return 30; 
	else return 31;
}

int main()
{
	ifstream fin("friday.in");
	ofstream fout("friday.out");
	int N;
	fin >> N;
	int s[] = {0, 0, 0, 0, 0, 0, 0};
	int d = 0;
	for(int y = 1900; y < 1900 + N; y ++) {
		for(int m = 1; m <= 12; m ++) {
			int d13 = d + 13;
			s[d13 % 7] ++;
			d += month2day(y, m);
		}
	}
	fout<<s[6]<<" "<<s[0]<<" "<<s[1]<<" "<<s[2]<<" "<<s[3]<<" "<<s[4]<<" "<<s[5]<<endl;
}
