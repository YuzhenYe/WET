#include <iostream>
using namespace::std;

class Node
{
	public:
		int value;
		Node *left;
		Node *right;
		Node(int n) {
			value = n;
			left = NULL;
			right = NULL;
		}
}

Node *insert(Node *root, int q) {
	Node *newnode = new Node(q);
	if(root == NULL) return newone;
	if(q < root -> data) root -> left = insert(root -> left, q);
	else root -> right = insertRec(root -> right, q);
}

Node* insertLoop(Node *tree, int q) {
{
	Node *newnode = new Node(q);
	iff(tree == NULL) return newnode;
	while(curr != NULL) {
		pre = curr;
		if(q < curr -> data) {
			curr = curr -> left;
		}
		else {
			curr = curr -> right;
		}
	}
	if(q > pre -> value) pre -> left = newnode;
	else pre -> right = newnode;
}

int main()
{
	Node *root = NULL;
	int n;
	cin >> n;
	string what;
	for(i = 0; i < n; i ++) {
		cin >> what;
		if(what == "print") {
			print(root);
		}
		else {
			cin >> a;
			root = insert(root, a);
		}
	}
}
