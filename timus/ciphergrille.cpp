#include <iostream>
#include <algorithm>
using namespace::std;

void display(int *idx)
{
	for(int i = 0; i < 4; i ++)
		cout<<idx[i]<<" ";
	cout<<endl;
}

void turn(int *idx)
{
	for(int i = 0; i < 4; i ++) {
		int t = idx[i];
		int r = t / 4;	
		int c = t % 4;
		int r1 = c;
		int c1 = 3 - r;
		idx[i] = 4 * r1 + c1;
	}
	sort(idx, idx + 4);
}

int main()
{
	string window="", ciphered="", passwd="", tmp;
	int i, j, t, idx[4];
	for(i = 0; i < 4; i ++) {
		cin >> tmp;	
		window += tmp;
	}
	j = 0;
	for(i = 0; i < window.length(); i ++) {
		if(window[i] == 'X') idx[j++] = i;
	}
	for(i = 0; i < 4; i ++) {
		cin >> tmp;	
		ciphered += tmp;
	}
	for(t = 0; t < 4; t ++) {
		for(i = 0; i < 4; i ++) {
			passwd += ciphered[idx[i]];
		}
		turn(idx);
	}
	cout<<passwd<<endl;
}
