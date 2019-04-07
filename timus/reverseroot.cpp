#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace::std;

int main()
{
	double *sqroot = new double[256000];
	long long n;
	int a = 0;
	while(cin >> n) {
		sqroot[a++] = sqrt(n);
	}
	for(int i = a - 1; i >= 0; i --) {
		//cout<<setprecision(4)<<fixed<<sqroot[i]<<endl;
		printf("%.4f\n", sqroot[i]);
	}
}
