//demonstrate stack and its main functions
//push(), pop(), and top()
#include <iostream>
#include <stack>

using namespace::std;

int main() 
{
	stack<string> s;
	s.push("s1");
	s.push("s2");
	while(!s.empty()) {
		cout<<s.top()<<endl;
		s.pop();
	}
}
