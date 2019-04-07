/*
TASK: milk
ID: yuzheny2
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace::std;

typedef struct f
{
	int price;
	int amount;
} farmer;

bool farmercmp(farmer fm1, farmer fm2)
{
	return fm1.price < fm2.price;
}

int main() 
{
	ifstream fin("milk.in");
	ofstream fout("milk.out");

	int totalmilk, howmany;
	fin >> totalmilk >> howmany;
	farmer *farm = new farmer[howmany];
	int i;
	for(i = 0; i < howmany; i ++)
		fin >>farm[i].price >> farm[i].amount;
	fin.close();

	//sort farmers based on the price of the milk they sell
	sort(farm, farm + howmany, farmercmp); 
	int spent = 0;
	i = 0;
	while(totalmilk > 0) {
		int buy = (totalmilk > farm[i].amount)?farm[i].amount:totalmilk;
		spent += buy * farm[i].price;
		totalmilk -= buy;
		i ++;
	}
	fout<<spent<<endl;
	fout.close();
}
