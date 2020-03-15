#include <iostream>
using namespace::std;

int main()
{
	int i, n, m;
	cin >> n;
	string tmp;
	int hungrymax = 0;
	int satisfymin = 10;
	for(i = 0; i < n; i ++) {
		cin >> m >> tmp; 
		if(tmp == "hungry") {
			if(m > hungrymax) hungrymax = m;
		}	
		else {
			if(m < satisfymin) satisfymin = m;
		}
	}
	if(hungrymax < satisfymin) {
		if(satisfymin < 3) satisfymin = 3;
		cout<<satisfymin<<endl;
	}
	else {
		cout<<"Inconsistent"<<endl;
	}
}
