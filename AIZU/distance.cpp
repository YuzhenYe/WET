#include <iostream>
#include <cmath>
#include <cstdio>
using namespace::std;

int main()
{
	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	double s = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	//cout.precision(17);
	//cout<< s <<endl;
	printf("%.6f\n", s);
}
