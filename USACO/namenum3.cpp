/*
ID: yuzheny2
TASK: namenum
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace::std;

int main()
{
	ifstream fin("namenum.in");
	ifstream dict("dict.txt");
	ofstream fout("namenum.out");
	string keypad[] = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PRS", "TUV", "WXY"};

	string brandnum;
	fin >> brandnum;
	fin.close();

	//get all words from the dictionary, stored to dictwords
        string *dictwords = new string[5001];
        int tot = 0;
        string tmp;
        while(dict >> tmp) {
                dictwords[tot ++] = tmp;
        }
        dict.close();

	//make all possible words matching the number (according to the keypad)
	int totword = pow(3, brandnum.length()); 
	cout<<"totword "<<totword<<endl;
	string *wordlist = new string[totword];
	wordlist[0] = "";
	int add = 1;
	for(int i = 0; i < brandnum.length(); i ++) {
		int j = int(brandnum[i]) - '0';
		string code = keypad[j];
		for(int k = 0; k < add; k ++) {
			wordlist[add + k] = wordlist[k] + code[1];
			wordlist[2 * add + k] = wordlist[k] + code[2];
			wordlist[k] = wordlist[k] + code[0];
		}
		add *= 3; 
	}
	//cout<<"number "<<brandnum<<" total words "<<add<<endl;

	//only report the words that appear in the dictionary
	bool *valid = new bool[tot]; 
	for(int i = 0; i < tot; i ++) valid[i] = false;
	for(int i = 0; i < add; i ++) {
		//binary search
		int left, right, mid;
		left = 0; 
		right = tot;	
		while(left < right) {
			mid = (right - left) / 2 + left;
			if(wordlist[i] == dictwords[mid]) { 
				valid[mid] = 1;
				break;
			}
			else if(wordlist[i] < dictwords[mid]) {
				right = mid;
			}
			else {
				left = mid + 1;
			}
		}
	}
	int totvalid = 0;
	for(int i = 0; i < tot; i ++) 
		if(valid[i]) {
			fout<<dictwords[i]<<endl;
			totvalid += 1;
		}

	if(!totvalid) fout<<"NONE"<<endl;
	fout.close();
}
