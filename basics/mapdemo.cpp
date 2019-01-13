#include <iostream>
using namespace::std;
int main()
{
	int n = 10;
	int b = 10;
	char letter = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[n%b];
	cout<<"n%b "<<n%b<<" letter "<<letter<<endl;
}
