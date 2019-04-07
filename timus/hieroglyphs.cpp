#include <iostream>
using namespace::std;

int main()
{
	int n;
	string seqs[1000];
	cin >> n;
	for(int i = 0; i < n; i ++) {
		cin >> seqs[i];
	}
	string let;
	cin >> let;
	for(int i = 0; i < n; i ++) {
		if(seqs[i][0] == let[0]) cout<<seqs[i]<<endl;
	}

}
