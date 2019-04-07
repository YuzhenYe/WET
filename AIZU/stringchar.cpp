#include <iostream>
using namespace::std;

int main() {
	int c1 = (int) 'c';
	int c2 = c1 + 'A' - 'a';
	cout<<c1<<" "<<(char) c1<<" "<<c2<<" "<<(char) c2<<endl;
}
