#include <iostream>
using namespace::std;

typedef struct {
	int id;
	int left;
	int right;
} Node;

Node *nodeArray;

void postOrder(int idx) {
	if(nodeArray[idx].left != -1) postOrder(nodeArray[idx].left);
	if(nodeArray[idx].right != -1) postOrder(nodeArray[idx].right);
	cout<<nodeArray[idx].id<<" ";
}

int reconst(int rootidx, int *inorder, int len) 
{
	
}

int main()
{
	int n;
	cin >> n;	
	nodeArray = new Node[n];
	int *preorder = new int[n];
	int *inorder = new int[n];
	int i, id, left, right;
	for(i = 0; i < n; i ++) {
		cin >> preorder[i];
	}
	for(i = 0; i < n; i ++) {
		cin >> inorder[i];
	}
	idx = 0;
	root = reconst(0, 0, n);
}
