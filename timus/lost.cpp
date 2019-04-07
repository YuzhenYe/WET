#include <iostream>
using namespace::std;

int main()
{
	int n;
	cin >> n;
	if(n < 5) {
		cout<<"few"<<endl;
	}
	else if(n < 10) {
		cout<<"several"<<endl;
	}
	else if(n < 20) {
		cout<<"pack"<<endl;
	}
	else if(n < 50) {
		cout<<"lots"<<endl;
	}
	else if(n < 100) {
		cout<<"horde"<<endl;
	}
	else if(n < 250) {
		cout<<"throng"<<endl;
	}
	else if(n < 500) {
		cout<<"swarm"<<endl;
	}
	else if(n < 1000) {
		cout<<"zounds"<<endl;
	}
	else {
		cout<<"legion"<<endl;	
	}
}
