#include <iostream>
using namespace::std;

int main()
{
	int n, k;
	cin >> n >> k;
	int survived = 0; 
	int unused = 0; 
	int boomboom;
	for(int i = 0; i < n; i ++) {
		cin >> boomboom;
		if(boomboom < k) { 
			survived += k - boomboom;
		}
		else {	
			unused += boomboom - k;
		}
	} 
	cout<<unused<<" "<<survived<<endl;
}
