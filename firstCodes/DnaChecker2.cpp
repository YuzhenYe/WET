#include <iostream>
using namespace::std;

int main()
{
	char str[] = "ATCGTABCWW";
	bool bad = false;
	for(int i = 0; i < 10; i ++) {
		if(!(str[i] == 'A' || str[i] == 'T' || str[i] == 'C' || str[i] == 'G')) {
			bad = true;
			break;
		} 
	}	
	if(bad) {
		cout << str << " is invalid"<< endl;
	}
	else {
		cout << str << " is valid DNA"<<endl;
	}
	return (0);
}
