#include <iostream>
using namespace::std;

typedef struct {
	int id;
	int left;
	int right;
	int parent;
} Node;

Node *nodeArray;

void preOrder(int idx) {
	cout<<nodeArray[idx].id<<" ";
	if(nodeArray[idx].left != -1) preOrder(nodeArray[idx].left);
	if(nodeArray[idx].right != -1) preOrder(nodeArray[idx].right);
}

void inOrder(int idx) {
	if(nodeArray[idx].left != -1) inOrder(nodeArray[idx].left);
	cout<<nodeArray[idx].id<<" ";
	if(nodeArray[idx].right != -1) inOrder(nodeArray[idx].right);
}

void postOrder(int idx) {
	if(nodeArray[idx].left != -1) postOrder(nodeArray[idx].left);
	if(nodeArray[idx].right != -1) postOrder(nodeArray[idx].right);
	cout<<nodeArray[idx].id<<" ";
}

int main()
{
	int n;
	cin >> n;	
	nodeArray = new Node[n];
	int i, id, left, right;
	for(i = 0; i < n; i ++) {
		nodeArray[i].parent = nodeArray[i].left = nodeArray[i].right = -1;
	}
	for(i = 0; i < n; i ++) {
		cin >> id >> left >> right;
		nodeArray[id].left = left;
		nodeArray[id].right = right;
		nodeArray[left].parent = nodeArray[right].parent = id;
	}
	int root = -1;
	for(i = 0; i < n; i ++) {
		if(nodeArray[i].parent == -1) { 
			root = i;
			break;
		}
	}
	cout<<"root "<<root<<endl;
	cout<<"Preorder"<<endl;
	preOrder(root);
	cout<<endl;
	cout<<"Inorder"<<endl;
	inOrder(root);
	cout<<endl;
	cout<<"Postorder"<<endl;
	postOrder(root);
	cout<<endl;
}
