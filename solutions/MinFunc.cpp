#include <iostream>
using namespace::std;

int getMin(int a, int b)
{
	if(a < b) return a;
	else return b;
}

int main(int argc, char* argv[])
{
	int c = getMin(10, 20);
	cout<<"compare 10 20: " <<c<<" is smaller"<<endl;
	int d = getMin(100, 20);
	cout<<"compare 100 20: " <<d<<" is smaller"<<endl;

	return 0;
}
