#include <iostream>
using namespace::std;

int guessMe(int n)         
{       
        int a = 0;
        for(int i = 1; i <= n; i ++) {
                a += i;
        }
        return a;
}
int main()
{
        int b = guessMe(5);
        int c = guessMe(10);
	cout<<"guessMe "<<5<<" = "<<b<<endl;
	cout<<"guessMe "<<10<<" = "<<c<<endl;
}

