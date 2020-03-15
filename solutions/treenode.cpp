#include <iostream>
using namespace::std;

class Node {
	public:
		int data;
		Node *left;
		Node *right;
	public:
		Node(int d) {
			data = d;
			left = NULL;
			right = NULL;
		}
};

int main()
{
	Node *one = new Node(5);
	cout<<one -> data<<endl;

	Node two(10);
	cout<<two.data<<endl;
}
