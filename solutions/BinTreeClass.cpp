#include <iostream>
using namespace::std;

//class or struct will be fine
class Node 
{
	public:
		//int data;
		int left;
		int right;
		int parent;
		int depth;
		int height;
		Node() {
			left = right = parent = -1;
			depth = height = 0;
		}
};

void computeHightDepth(int curr, int currDepth, Node* node)
{
	node[curr].depth = currDepth;
	int height = 0;
	int left = node[curr].left, right = node[curr].right;
	if(left != -1) {
		computeHightDepth(left, currDepth + 1, node);
		height = node[left].height + 1;
	}
	if(right != -1) {
		computeHightDepth(right, currDepth + 1, node);
		int height1 = node[right].height + 1;
		if(height1 > height) height = height1;
	}
	node[curr].height = height;
}

int main()
{
	int i, n, pidx, ridx, lidx;
	cin >> n;
	Node *nodeArray = new Node[n];
	for(i = 0; i < n; i ++) {
		cin >> pidx >> lidx >> ridx;
		nodeArray[pidx].left = lidx;
		nodeArray[pidx].right = lidx;
		nodeArray[lidx].parent = pidx;
		nodeArray[ridx].parent = pidx;
		cout<<"nodeArray "<<pidx<<" "<<lidx<<" "<<ridx<<endl;
	}
	computeHightDepth(0, 0, nodeArray);
	int sibling, parent, left, right, degree;
	for(i = 0; i < n; i ++) {
		if(i == 0) sibling = -1;
		else {
			parent = nodeArray[i].parent;
			left = nodeArray[parent].left;
			right = nodeArray[parent].right;
			if(left == i) sibling = right;
			else sibling = left;
		}
		degree = 0;
		if(nodeArray[i].left != -1) degree ++;
		if(nodeArray[i].right != -1) degree ++;
		//node 0: parent = -1, sibling = -1, degree = 2, depth = 0, height = 3, root
		string type;
		if(nodeArray[i].parent == -1) type = "root";
		else if(degree == 0) type = "leaf";
		else type = "internal";
		cout<<"node "<<i<<": parent = "<<nodeArray[i].parent<<", sibling = "<<sibling<<", degree = "<<degree<<", depth = "<<nodeArray[i].depth<<", height = "<<nodeArray[i].height<<", "<<type<<endl; 
	}
}
