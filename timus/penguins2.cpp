#include <iostream>
using namespace::std;

int main()
{
	string thisname;
	int little = 0;
	int emperor = 0;
	int macaroni = 0;
	int tot;
	cin >> tot;
	cout<<"tot "<<tot<<endl;
	for(int i = 0; i < tot; i ++) {
		getline(cin, thisname);
		cout<<"read #"<<thisname<<"#"<<endl;
		if(thisname[0] == 'E') emperor += 1;
		else if(thisname[0] == 'L') little += 1;
		else if(thisname[0] == 'M') macaroni += 1;
/*
		if(thisname == "Emperor Penguin") emperor += 1;
		else if(thisname == "Little Penguin") little += 1;
		else if(thisname == "Macaroni Penguin") macaroni += 1;
*/
	}
	if((emperor > little) && (emperor > macaroni)) cout<<"Emperor Penguin"<<endl;
	else if((little > emperor) && (little > macaroni)) cout<<"Little Penguin"<<endl;
	else cout<<"Macaroni Penguin"<<endl;
}
