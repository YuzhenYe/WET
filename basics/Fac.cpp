#include <iostream>
using namespace::std;

//using recursion
int fac_rec(int n)
{
	if(n == 1) return 1;
	//note calling fac_rec(n - 1)
	else return n * fac_rec(n - 1);	
}

//no recursion
int fac(int n)
{
	int t = 1;
	//a loop is needed to multiple one number at a time to t
	for(int i = 1; i <= n; i ++) t *= i;
	return t;
}

int main()
{
	int n;
	cin >> n;
	int t1 = fac_rec(n);
	int t2 = fac(n);
	//t1 should be the same as t2
	cout<<"Factorial "<<t1<<" "<<t2<<endl;
}
