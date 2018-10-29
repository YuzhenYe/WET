/*
ID: yuzheny2
LANG: C++
TASK: gift1
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace::std;

int main()
{
	int np;
	ifstream fin("gift1.in");
	ofstream out("gift1.out");
	fin>>np;
	string *names = new string[np];
	int *money = new int[np];
	int i, j, f;
	for(i = 0; i < np; i ++)  { 
		fin >> names[i];
		money[i] = 0;
	}
	while(!fin.eof( )) {
		string giver;
		fin >> giver;
		int giveamount, howmany;
		fin >> giveamount >> howmany;
		//if((giveamount == 0) && (howmany == 0)) break;
		if(howmany == 0) {
			//cout<<giver<<" "<<howmany<<endl;
			continue;
		}
		int keep, each;
		keep = giveamount % howmany;
		each = giveamount / howmany;
		//cout<<giver<<" "<<each<<" "<<keep<<endl;
		for(j = 0; j < np; j ++) {
			if(names[j] == giver) {
				money[j] -= giveamount;
				money[j] += keep;
			}
		}
		for(f = 0; f < howmany; f ++) {
			string receiver;
			fin >> receiver;
			for(j = 0; j < np; j ++) {
				if(names[j] == receiver) money[j] += each;
			}
		}
	}
	
	for(i = 0; i < np; i ++) {
		out<<names[i]<<" "<<money[i]<<endl;
	}
	out.close();
	fin.close();
}
