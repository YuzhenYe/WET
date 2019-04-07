#include <iostream>
using namespace::std;

int diff(int n)
{
	int digits[6] = {0, 0, 0, 0, 0, 0};
	int d = 6; 
	int n0 = n;
	while(n > 0) {
		d --;
		digits[d] = n % 10;
		n /= 10;
	}
	int sum1 = digits[0] + digits[1] + digits[2];
	int sum2 = digits[3] + digits[4] + digits[5];
	//cout<<"n "<<n0<<" sum1 "<<sum1<<" sum2 "<<sum2<<endl;
	return (sum1 - sum2);
}

int main()
{
	int n;
	cin >> n;
	if((diff(n + 1) == 0) || (diff(n - 1) == 0)) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
