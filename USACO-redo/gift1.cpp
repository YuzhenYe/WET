/*
ID: yuzheny2
LANG: C++
TASK: gift1
*/

#include <fstream>
#include <iostream>
using namespace::std;

typedef struct {
	string name;
	int money;
} person;

person p[10];
int n;

int whichperson(string name)
{
	for(int i = 0; i < n; i ++) {
		if(name == p[i].name) return i;	
	}
	return -1;
}

int main()
{
	ifstream fin("gift1.in");
	ofstream fout("gift1.out");
	fin >> n;
	int i;
	for(i = 0; i < n; i ++) {
		fin >> p[i].name;
		p[i].money = 0;
	}
	string name;
	int howmuch, howmany;
	while(!fin.eof()) {
		fin >> name >> howmuch >> howmany;
		int g = whichperson(name);
		int divide = 0; 
		if(howmany != 0) {
			divide = howmuch / howmany;	
		}
		int decrease = divide * howmany;
		p[g].money -= decrease;
		for(i = 0; i < howmany; i ++) {
			fin >> name;
			int r = whichperson(name); 
			p[r].money += divide;	
		}
	}
	fin.close();
	for(i = 0; i < n; i ++) {
		fout<<p[i].name<<" "<<p[i].money<<endl;
	}
	fout.close();
}
