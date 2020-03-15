#include <iostream>
using namespace::std;

typedef struct
{
	int beg;
	int len;
} conseq;

bool valid(int n) 
{
	if((n == 0) || (n == 1) || (n == 8) || (n == 6) || (n == 9)) return true;
	else return false;
}

string overturn(int i) {
	int ten = i / 10;
	int dig = i % 10;
	if(ten == 6) ten = 9;
	else if(ten == 9) ten = 6;
	if(dig == 6) dig = 9;
	else if(dig == 9) dig = 6;
	return to_string(dig) + to_string(ten);
}

int main()
{
	int last = -1;
	conseq run[99];
	int a = 0;
	int i, j;
	for(i = 10; i <= 99; i ++) {
		int ten = i / 10;
		int dig = i % 10;
		if(valid(ten) && valid(dig)) { 
			if(i == last + 1) {
				run[a - 1].len += 1;
			}
			else {
				run[a].beg = i;
				run[a].len = 1;
				a ++;
			}
			last = i;
		}
	}
	/*
	cout<<"total trunk "<<a<<endl;	
	for(i = 0; i < a; i ++) {
		cout<<run[i].beg<<" "<<run[i].len<<endl;
	}	
	*/
	int n;
	cin >> n; 
	for(i = 0; i < a; i ++) {
		if(run[i].len >= n) {
			for(j = run[i].beg + n - 1; j >= run[i].beg; j --) {
				if(j == run[i].beg) cout<<overturn(j)<<endl;
				else cout<<overturn(j)<<" ";
			}
			break;
		}
	}
	if(i == a) cout<<"Glupenky Pierre"<<endl;
}
