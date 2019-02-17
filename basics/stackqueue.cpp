#include <iostream>
#include <stack>
#include <queue>
using namespace::std;

typedef struct mytype
{
	string name;
	int score;
	bool happy;
} mytype;

int main()
{
	int nums[10] = {10, 20, 34, 10, 4, 5, 1, 9, 100, 10000};
	stack<int> ns; //declare a stack of integers
	queue<int> nq; //declare a queue of integers
	for(int i = 0; i < 10; i ++) {
		ns.push(nums[i]);	;
		nq.push(nums[i]);	;
	}

	int s1 = ns.top();
	ns.pop();
	int s2 = ns.top();
	ns.pop();
	cout<<"stack "<<s1 + s2<<endl;

	int q1 = nq.front();
	nq.pop();
	int q2 = nq.front();
	nq.pop();
	cout<<"queue "<<q1 + q2<<endl;

	stack<mytype> another;
	mytype tmp;
	tmp.name = "Jon"; 
	tmp.score = 10;
	tmp.happy = true;
	another.push(tmp);
	mytype tmp2 = another.top();	
	cout<<"another example "<<tmp2.name<<" "<<tmp2.score<<" "<<tmp2.happy<<endl;
}
