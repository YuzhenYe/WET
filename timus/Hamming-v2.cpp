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
		if(diff == 3)  iv = !iv;
		else if(p1r == p1) i = !i; 
		else if(p2r == p2) ii = !ii;
		else iii = !iii; 
		cout<<i<<" "<<ii<<" "<<iii<<" "<<iv<<" "<<p1<<" "<<p2<<" "<<p3<<endl;
	}
}
