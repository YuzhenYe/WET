#include <iostream>
using namespace::std;

//define a function
//max is the function name, it takes two arguments (two integers), and it returns an integer
int max(int num1, int num2)
{
	//the body of the function
	if(num1 > num2) {
		return num1;
	}
	else {
		return num2;
	}
}

int main()
{
	int n1, n2;
	cout<<"number 1 please: "<<endl;
	cin>>n1;
	cout<<"number 2 please: "<<endl;
	cin>>n2;

	//calling the function to get max value.
	int result = max(n1, n2);
	cout<< "max " << result << endl;

	return 0;
}
