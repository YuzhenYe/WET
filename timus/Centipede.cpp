#include <iostream>
using namespace::std;

int main()
{
	int leftfoot, rightfoot;
	leftfoot = rightfoot = 40;
	int leftshoe, rightshoe;
	cin >> leftshoe >> rightshoe;
	int worst1 = 2 * rightshoe + leftfoot;
	int worst2 = 2 * leftshoe + 39; //why this
	if(worst1 > worst2) 
		cout<<worst1<<endl;
	else cout<<worst2<<endl;
}
