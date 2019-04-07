#include <iostream>
using namespace::std;

int main()
{
	int n, k;
	cin >> n >> k;
	int alien, earth;
	int n1, n2;
	alien = earth = 0;
	for(int i = 0; i < n; i ++) {
		cin >> n1 >> n2;
		alien += n1;
		earth += n2;
	}
	//alien + k - (n + 1) * 2  == earth + guess -- safe
	int guess = alien + k - (n + 1) * 2 - earth;
	if(guess > 0) cout<<guess<<endl;
	else cout<<"Big Bang!"<<endl;
}
