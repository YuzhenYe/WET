#include <iostream>
using namespace::std;

void getbits(int n, char *assigned) 
{
	int i;
	for(i = 0; i < n; i ++) {
		if(assigned[i] == '-') break;
	}
	if(i == n) { //all bits are assigned
		string bitseq = "";
		for(i = 0; i < n; i ++) bitseq += assigned[i];
		cout<<bitseq<<endl;
	}
	else { //#i bit is not assigned yet
		assigned[i] = '0'; //sign 0 to bit #i
		getbits(n, assigned);
		assigned[i] = '1'; //sign 1 to bit #i
		getbits(n, assigned);
		assigned[i] = '-'; //reset bit #i
	}
}

int main()
{
	int i, n;
	cin >> n;
	char *assigned = new char[n];
	for(i = 0; i < n; i ++) assigned[i] = '-'; 
	getbits(n, assigned);
}
