#include <iostream>
using namespace::std;

int main()
{
	string thisname;
	int little = 0;
	int emperor = 0;
	int macaroni = 0;
	while(getline(cin, thisname)) {
		if(thisname[0] == 'E') emperor += 1;
		else if(thisname[0] == 'L') little += 1;
		else if(thisname[0] == 'M') macaroni += 1;
	}
	if((emperor > little) && (emperor > macaroni)) cout<<"Emperor Penguin"<<endl;
	else if((little > emperor) && (little > macaroni)) cout<<"Little Penguin"<<endl;
	else cout<<"Macaroni Penguin"<<endl;
}
