#include <iostream>
using namespace::std;

int main()
{
	char greeting1[] = "Hello";
	char greeting2[] = {'H', 'e', 'l', 'l', 'o', '\0'}; 
	string greeting3 = "Hello";
	char name[100];
	cout << "What's your name: "<<endl;
	cin >> name;

	cout<<greeting1<<" "<<name<<endl;
	cout<<greeting2<<" "<<name<<endl;
	cout<<greeting2<<" "<<name<<endl;

	return(0);
}
