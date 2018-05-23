#include <iostream>
using namespace::std;

int main()
{
	char str[] = "ATCGTABCWW";
	int badletter = 0;
	for(int i = 0; i < 10; i ++) {
		//if(!(str[i] == 'A' || str[i] == 'T' || str[i] == 'C' || str[i] == 'G')) 
		//	badletter += 1;	
		if(str[i] == 'A') continue;
		else if(str[i] == 'T') continue;
		else if(str[i] == 'C') continue;
		else if(str[i] == 'G') continue;
		else badletter += 1;
	}	
	if(badletter > 0) {
		cout << str << " is invalid DNA"<< endl;
	}
	else {
		cout << str << " is valid DNA"<<endl;
	}
	return (0);
}
