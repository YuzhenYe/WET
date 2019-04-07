/*
ID: yuzheny2
LANG: C++
TASK: beads
*/

#include <iostream>
#include <fstream>
using namespace::std;

int main()
{
	ifstream fin("beads.in");
	int i, j, k, len;
	string beads;
	fin >> len >> beads;	
	string dup = beads;
	dup.append(beads);
	dup.append(beads);
	//string dup = beads + beads + beads;
	//cout<<dup<<endl;
	int maxi, maxbeads;
	maxbeads = 0;
	char color;
	for(i = 0; i < len; i ++) {
		j = i + len;
		//go forward (one end)
		color = dup[j + 1];
		//cout<<"forward "<<dup[j+1];
		int forwardlen = 1;
		for(k = j + 2; k < j + 1 + len; k ++) {
			if(dup[k] != 'w') {
				if((color != 'w') && dup[k] != color) break;
				color = dup[k];
			}
			forwardlen ++;
			//cout<<dup[k];
		}
		//cout<<endl;
		//go backward (the other end) 
		j = i + len;
		color = dup[j];
		//cout<<"bakward "<<dup[j];
		int backwardlen = 1;
		for(k = j-1; k > j - len; k --) {
			if(dup[k] != 'w') {
				if((color != 'w') && dup[k] != color) break;
				color = dup[k];
			}
			backwardlen ++;
			//cout<<dup[k];
		}
		//cout<<endl;
		int thislen = forwardlen + backwardlen;
		if(thislen > len) thislen = len;
		if(thislen > maxbeads) {
			maxbeads = thislen;
			maxi = i;
		}
		//cout<<i<<" "<<forwardlen<<" "<<backwardlen<<endl;
	}
	ofstream fout("beads.out");
	//cout<<maxbeads<<endl;
	fout<<maxbeads<<endl;
	fin.close();
	fout.close();
}
