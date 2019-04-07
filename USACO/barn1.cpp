/*
ID: yuzheny2
TASK: barn1
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace::std;

typedef struct block
{
	int start;
	int end;
	int size;
} block;

int compare(block b1, block b2)
{
	return b1.size > b2.size;
}

int main()
{
	int m, s, c;
	ifstream fin("barn1.in");
	ofstream fout("barn1.out");
	fin >> m >> s >> c;
	int *occupied = new int[c];
	int i;
	for(i = 0; i < c; i ++) 
		fin>>occupied[i];
	fin.close();
	sort(occupied, occupied + c);
	block *vacantblock = new block[c];
	int vacantblocknum = 0;
	for(i = 0; i < c; i ++) {
		if((i > 0) && (occupied[i] > occupied[i-1]+1)) {
			vacantblock[vacantblocknum].start = occupied[i-1];
			vacantblock[vacantblocknum].end = occupied[i];
			vacantblock[vacantblocknum].size = occupied[i]-occupied[i-1] - 1;
			vacantblocknum += 1;
		}
	}
	sort(vacantblock, vacantblock + vacantblocknum, compare);
/*
	int minstall = s;
	int maxblock = min(m - 1, vacantblocknum);
	int used = 0;
	while((used < maxblock)) {
		minstall -= vacantblocksize[used++];
	}
	cout<<minstall<<endl;
	fout<<minstall<<endl;
*/
	int maxsep = min(m-1, vacantblocknum);
	int blocked = s - (occupied[0] - 1) - (s - occupied[c - 1]);
	//cout<<"blocked "<<blocked<<endl;
	//cout<<"maxsep "<<maxsep<<endl;
	for(i = 0; i < maxsep; i ++) {
		blocked -= vacantblock[i].size;
		//cout<<"vacant block "<<vacantblock[i].start<<" "<<vacantblock[i].end<<" size "<<vacantblock[i].size<<endl;
	}
	//cout<<blocked<<endl;
	fout<<blocked<<endl;
	fout.close();
}
