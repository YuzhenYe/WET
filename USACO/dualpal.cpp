/*
TASK: dualpal
ID: yuzheny2
LANG: C++
*/

#include <iostream>
#include <fstream>

using namespace::std;

bool isPalindromic(string str)
{
	int slen = str.length();
	int mid = slen / 2;
	for(int i = 0; i < mid; i ++) {
		if(str[i] != str[slen - i - 1]) return false;
	}
	return true;
}

//other approaches: use if-else if statements, or switch-case statements
char encode(int num)
{
	//switch(num):
	//case 10: return 'A'
	string codes = "0123456789ABCDEFGHIG";
	return codes[num];
}

string changebase(int num, int base)
{
	int divisor = 1;
	int dividend = num;
	while(dividend >= divisor) {
		divisor *= base;
	}
	divisor /= base;
	//cout<<"max divisor "<<divisor<<endl;
	string numstring;
	int quotient, remainder;
	while(divisor >= base) {	
		quotient = dividend / divisor;
		remainder = dividend % divisor;
		//char thispos = encode(quotient); 	
		char thispos = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[quotient];
		numstring += thispos;
		//cout<<"dividend "<<dividend<<" quotient "<<quotient<<" remainder "<<remainder<<" code "<<thispos<<endl;
		dividend -= quotient * divisor;
		divisor /= base; 
	}
	numstring += encode(dividend % base);
	return numstring;
}

//Write a program that reads two numbers (expressed in base 10):
//N (1 <= N <= 15)
//S (0 < S < 10000)
//and then finds and prints (in base 10) the first N numbers strictly greater than S that are palindromic when written in two or more number bases (2 <= base <= 10).
int main()
{
	ifstream fin("dualpal.in");
	ofstream fout("dualpal.out");
	int n, s;
	fin >> n >> s;
	fin.close();
	int found = 0;
	while(1) {
		s += 1;
		int valid = 0;
		for(int b = 2; b <= 10; b ++) {
			string numstring = changebase(s, b);
			if(isPalindromic(numstring)) valid += 1; 
			if(valid == 2) break;
		}
		if(valid >= 2) {
			fout<<s<<endl;
			found += 1;
			if(found == n) break;
		}
	}
	fout.close();
}
