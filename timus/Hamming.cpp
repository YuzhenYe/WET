#include <iostream>
using namespace::std;

int main()
{
	int i, ii, iii, iv, p1, p2, p3;
	cin >> i >> ii >> iii >> iv >> p1 >> p2 >> p3;
	int p1r, p2r, p3r;
	p1r = (ii + iii + iv) % 2;
	p2r = (i + iii + iv) % 2;
	p3r = (i + ii + iv) % 2;
	//cout<<"expected "<<i<<" "<<ii<<" "<<iii<<" "<<iv<<" "<<p1r<<" "<<p2r<<" "<<p3r<<endl;
	int diff = 0;
	if(p1r != p1) diff ++;
	if(p2r != p2) diff ++;
	if(p3r != p3) diff ++;
	if(diff <= 1) {
		cout<<i<<" "<<ii<<" "<<iii<<" "<<iv<<" "<<p1r<<" "<<p2r<<" "<<p3r<<endl;
	}
	else {	
		//p1, p2, p3 are correct
		if(diff == 3) {
			if(iv == 0) iv = 1;
			else iv = 0;
		}
		else if(p1r == p1) {
			if(i == 0) i = 1;
			else i = 0;
		}
		else if(p2r == p2) {
			if(ii == 0) ii = 1;
			else ii = 0;
		}
		else {
			if(iii == 0) iii = 1;
			else iii = 0;
		}
		cout<<i<<" "<<ii<<" "<<iii<<" "<<iv<<" "<<p1<<" "<<p2<<" "<<p3<<endl;
	}
}
