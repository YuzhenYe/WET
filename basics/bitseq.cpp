#include <iostream>
using namespace::std;

//use recursion to generate bigseq of length n
void getbits(int n, string bitseq) 
{
	if(bitseq.length() == n) { //not done yet with bitseq
		cout<<bitseq<<endl;
	}
	else {
		bitseq += "0"; //get a new bit 0
		getbits(n, bitseq); //recursion
		bitseq.pop_back(); //chop off the last bit
		bitseq += "1"; //get a new bit 1
		getbits(n, bitseq); //recursion  
		bitseq.pop_back(); //chop off the last bit
	}
}

int main()
{
	int i, n;
	string bitseq = "";
	cin >> n;
	getbits(n, bitseq);
}
