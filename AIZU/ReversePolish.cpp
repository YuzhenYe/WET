#include <iostream>
#include <sstream>
#include <stack>
using namespace::std;

int main() 
{
	stack<int> s;
	string buf;
	getline(cin, buf);
	stringstream ss(buf); 
	int a, b, c, d;
	while(ss >> buf) {
		if((buf == "+") || (buf == "-") || (buf == "*")) {
			a = s.top();
			s.pop();
			b = s.top();
			s.pop();
			if(buf == "+") c = a + b;
			else if(buf == "-") c = b - a;
			else c = a * b;
			s.push(c);
		}
		else {
			//stoi available in C++11
			stringstream s2(buf);
			s2 >> d;
			s.push(d);
		}
	}
	cout<<s.top()<<endl;
}
