/* ID: yuzheny2
TASK: namenum
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace::std;

//this function maps a word to a "number"
//e.g., given HER, it returns "437"
string word2numstr(string word)
{
	string alphab = "ABCDEFGHIJKLMNOPRSTUVWXY";
	string number = "222333444555666777888999";  
	string str = "";
	for(int i = 0; i < word.length(); i ++)  {
		for(int j = 0; j < alphab.length(); j ++) {
			if(alphab[j] == word[i]) str += number[j];
		}
	}
	return str;
}

int main()
{
	ifstream fin("namenum.in");
	ifstream dict("dict.txt");
	ofstream fout("namenum.out");

	string brandnum;
	fin >> brandnum;
	fin.close();

	string aword;
	int totvalid = 0;
	while(dict >> aword) {
		if(word2numstr(aword) == brandnum) {
			fout<<aword<<endl;
			totvalid += 1;
		}
	}
	dict.close();

	if(!totvalid) fout<<"NONE"<<endl;
	fout.close();
}
