#include <iostream>
using namespace::std;

int main()
{
	char dna[] = "ATCGTAG";
	char first = dna[0];
	if(first == 'A') {
		cout << "first letter is A" << endl;
	}	
	else if(first == 'T') {
		cout << "first letter is T" << endl;
	}	
	else if(first == 'C') {
		cout << "first letter is C" << endl;
	}	
	else if(first == 'G') {
		cout << "first letter is G" << endl;
	}	
	else {
		cout << "first letter is invalid" << endl;
	}	

	return(0);
}
