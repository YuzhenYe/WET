/*
ID: yuzheny2
LANG: C++
TASK: gift1
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace::std;

typedef struct Person 
{
	string name;	
	int money;
} Person;

int lookup(int total, Person *person, string inpname)
{
	for(int i = 0; i < total; i ++) {
		if(inpname == person[i].name) 
			return i; 
	} 
	return -1;
}

int main()
{
	int np;
	ifstream fin("gift1.in");
	ofstream out("gift1.out");
	fin>>np;
	Person *person = new Person[np];
	int i, j, f;
	for(i = 0; i < np; i ++)  { 
		fin >> person[i].name;
		person[i].money = 0;
	}
	string giver, receiver;
	int giveamount, howmany;
	while(fin >> giver >> giveamount >> howmany) {
		if(howmany == 0) continue;
		int keep, each;
		keep = giveamount % howmany;
		each = giveamount / howmany;
		//cout<<giver<<" "<<each<<" "<<keep<<endl;
		int giveridx = lookup(np, person, giver);
		person[giveridx].money += -giveamount + keep;
		for(f = 0; f < howmany; f ++) {
			string receiver;
			fin >> receiver;
			int receiveridx = lookup(np, person, receiver);
			person[receiveridx].money += each;
		}
	}
	for(i = 0; i < np; i ++) {
		out<<person[i].name<<" "<<person[i].money<<endl;
	}
	out.close();
	fin.close();
}
