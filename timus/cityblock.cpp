#include <iostream>
using namespace::std;

int gcd(int a, int b) 
{ 
   if (b == 0) 
      return a; 
   return gcd(b, a % b);  
} 

int main()
{
	int m, n;
	cin >> m >> n;	
	m --;
	n --;
	int s = m + n - gcd(m, n);
	cout<<s<<endl;
}
