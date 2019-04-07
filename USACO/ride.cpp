/*
ID: yuzheny2
LANG: C++
TASK: ride
*/
#include <iostream>
#include <fstream>
using namespace::std;

int main() {
	ifstream fin("ride.in");
	ofstream fout("ride.out");

	string com, grp;
	fin >> com >> grp;

	int i, c, g;
	c = 1;
	for(i = 0; i < com.length(); i ++) {
		c *= com[i] - 'A' + 1;	
	}
	g = 1;
	for(i = 0; i < grp.length(); i++) {
		g *= grp[i] - 'A' + 1;
	}
	if((c % 47) == (g % 47)) fout << "GO" <<endl;
	else fout << "STAY" << endl;

	fin.close();
	fout.close();

	return 0;
}
