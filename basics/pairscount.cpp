#include <iostream>
using namespace::std;
int pairs(int n)
{
        if(n == 2) return 1;
        else {
                return (1 + (n - 2)) * pairs(n - 2);
        }
}
int main()
{
	int n;
	cin >> n;
	cout<<"n " <<n<<" "<<pairs(n)<<endl;
}
