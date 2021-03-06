#include <iostream>
using namespace::std;
class Node
{
	public:
		int data;
		Node *left;
		Node *right;
		Node(int n) {
			data = n;
			left = NULL;
			right = NULL;
		}
};
Node *insert(Node *root, int q) {
	Node *newnode = new Node(q);
	if(root == NULL) return newnode;
	Node *pre, *curr;
	pre = curr = root;
	while(curr != NULL) {
		pre = curr;
		if(q < curr -> data) curr = curr -> left;
		else curr = curr -> right;

	}
	if(q < pre -> data) pre -> left = newnode;
	else pre -> right = newnode;

	return root;
}
void inorder(Node *root) {
	if(root == NULL) return;
	inorder(root -> left);
	cout<<" "<<root -> data;
	inorder(root -> right);
}
void preorder(Node *root) {
	if(root == NULL) return;
	cout<<" "<<root -> data;
	preorder(root -> left);
	preorder(root -> right);
}
int main()
{
	Node *root = NULL;
	int n, a;
	cin >> n;
	string what;
	for(int i = 0; i < n; i ++) {
		cin >> what;
		if(what == "print") {
			inorder(root);
			cout<<endl;
			preorder(root);
			cout<<endl;
		}
		else {
			cin >> a;
			root = insert(root, a);
		}
	}
}
