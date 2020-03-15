#include <iostream>
using namespace::std;

long long solution(int n, int k) 
{
	int d = n / k;
	int r = n % k;
	int s2 = d + 1;
	int t2 = r;
	int s1 = d;
	int t1 = k - r;
	long long add = 0;

	add = t1 * t2 * s1 * s2;
	if(t1 > 1) {
		add += t1 * (t1 - 1) / 2 * s1 * s1;		
	}
	if(t2 > 1) {
		add += t2 * (t2 - 1) / 2 * s2 * s2;		
	}
	return add;
}

int main()
{
	int t = 0;
	cin >> t;
	int i, n, k;
	for(i = 0; i < t; i ++) {
		cin >> n >> k;
		cout<<solution(n, k)<<endl;
	}
}
