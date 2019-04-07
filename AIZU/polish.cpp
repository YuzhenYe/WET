//choose C++11
#include <iostream>
#include <stack>
using namespace::std;

int main()
{
	stack<int> nums; 
	string tmp;
	int n1, n2, result;
	while(cin >> tmp) {
		if((tmp == "+") || (tmp == "*") || (tmp == "-") || (tmp == "/")) {
			n2 = nums.top();
			nums.pop();
			n1 = nums.top();	
			nums.pop();
			if(tmp == "+") result = n1 + n2;
			else if(tmp == "-") result = n1 - n2;
			else if(tmp == "*") result = n1 * n2;
			else if(tmp == "/") result = n1 / n2;
			nums.push(result);
		}
		else {
			nums.push(stoi(tmp));	
		}
	}
	cout<<nums.top()<<endl;
}
