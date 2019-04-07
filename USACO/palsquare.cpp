/*
TASK: palsquare
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


//Problem: Given a number base B (2 <= B <= 20 base 10), print all the integers N (1 <= N <= 300 base 10) 
//such that the square of N is palindromic when expressed in base B; also print the value of that 
//palindromic square. Use the letters 'A', 'B', and so on to represent the digits 10, 11, and so on.
int main()
{
	//int num = 2;
	//int base = 2;
	//string str = changebase(num, base);
	//cout<<str<<endl;
	ifstream fin("palsquare.in");
	ofstream fout("palsquare.out");
	int base, n, nsquare;
	string numstring;
	fin >> base;
	fin.close();
	for(n = 1; n <= 300; n ++) {
		nsquare = n * n;
		numstring = changebase(nsquare, base); 	
		bool pal = isPalindromic(numstring);
		//cout<<"n "<<n<<" nsquare "<<nsquare<<" string "<<numstring<<" palindromic? "<<pal<<endl;
		if(isPalindromic(numstring)) {
			fout<<changebase(n, base)<<" "<<changebase(nsquare, base)<<endl;
		}
	}
	fout.close();
}
