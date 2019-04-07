#include <iostream>
using namespace::std;

int main()
{
	int n, k;
	int f[1001];
	int diamond = 0;
	cin >> n;
	long long last = 3; //up to one dot on each side,
		      //both side no dots, one has one dot, one has dots on both sides, total dots: 0 + 1 + 2 = 3
	long long add = 1;
	//n dots:
	//f(n) = f(n-1) + (1+2+..n) + n * (n + 1)
	for(int i = 2; i <= n; i ++) {
		//using solutions with up to i - 1 dots on each side
		//add no dots, add one on one side, add one to both sides
		//add += i; //no need to do 1+2+..i each time from scratch
		//last += add + i * (i + 1);
		last += 3 * (i * (i + 1)) / 2;
	}
	cout<<last<<endl;
}
