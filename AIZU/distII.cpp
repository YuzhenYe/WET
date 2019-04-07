#include <iostream>
#include <cmath>
#include <cstdio>
using namespace::std;

int main()
{
	int i, n;
	int x[100], y[100];
	cin >> n;
	for(i = 0; i < n; i ++) cin >> x[i]; 
	for(i = 0; i < n; i ++) cin >> y[i]; 
	double p1, p2, p3, pinf, d, da;
	pinf = 0;
	for(i = 0; i < n; i ++) {
		d = abs(x[i] - y[i]);
		p1 += d;
		p2 += d * d;
		p3 += d * d * d;
		if(d > pinf) pinf = d;
	}
	printf("%.8f\n%.8f\n%.8f\n%.8f\n", p1, sqrt(p2), pow(p3, 1.0/3.0), pinf);
/*
	cout<<fixed<<setprecision(12);
	cout.precision(17);
	cout<<p1<<endl;	
	cout<<sqrt(p2)<<endl;	
	cout<<pow(p3, 1/3.0)<<endl;	
	cout<<pinf<<endl;	
*/
	return 0;
	
}
