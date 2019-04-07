/*
ID: yuzheny2
TASK: namenum
LANG: C++11
*/
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <math.h>

using namespace::std;

string num2letters(char num)
{
/*
	//use if-else statement
	if(num == '2') return "ABC";
	else if(num == '3') return "DEF";
	else if(num == '4') return "GHI";
	else if(num == '5') return "JKL";
	else if(num == '6') return "MNO";
	else if(num == '7') return "PRS";
	else if(num == '8') return "TUV";
	else if(num == '9') return "WXY";
	else return "";
*/
/*
	//use switch statement
	switch(num):
		case '2': return "ABC";
		case '3': return "DEF";
		case '4': return "GHI";
		case '5': return "JKL";
		case '6': return "MNO";
		case '7': return "PRS";
		case '8': return "TUV";
		case '9': return "WXY";
		default:  return "";
*/
	//using map, require C++11 to use initialization like below
	map<char,string> code = {{'2',"ABC"},{'3',"DEF"}, {'4', "GHI"}, {'5', "JKL"}, {'6',"MNO"}, {'7', "PRS"}, {'8', "TUV"}, {'9', "WXY"}};
	map<char,string>::iterator it = code.find(num);
	return it->second;
}

int main()
{
	ifstream fin("namenum.in");
	ifstream dict("dict.txt");
	ofstream fout("namenum.out");

	string brandnum;
	fin >> brandnum;
	fin.close();

	string *words = new string[5002];
	int tot = 0;
	string tmp;
	while(dict >> tmp) {
		words[tot ++] = tmp;
	}
	dict.close();

	bool *valid = new bool[tot];
	int i, p, w;
	int howmany = brandnum.length();
	for(w = 0; w < tot; w ++) {
		if(words[w].length() != howmany) valid[w] = false;
		else valid[w] = true;
	}
	for(p = 0; p < brandnum.length(); p ++) {
		string letters = num2letters(brandnum[p]);
		for(w = 0; w < tot; w ++) {
			if(!valid[w]) continue;
			if((letters[0] == words[w][p]) || (letters[1] == words[w][p]) || (letters[2] == words[w][p])) continue;
			valid[w] = false;
		}
	}
	int totvalid = 0;
	for(w = 0; w < tot; w ++) {
		if(valid[w] == true) {
			fout<<words[w]<<endl;
			totvalid += 1;
		}
	}
	if(!totvalid) fout<<"NONE"<<endl;
}
