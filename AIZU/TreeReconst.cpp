#include <iostream>
using namespace std;
typedef struct
{
	int value;
	int left;
	int right;
} Node;

Node node[41];

int reconst(int *prewalk, int *inwalk, int n) {
	int root = prewalk[0];
	int i;
	for(i = 0; i < n; i ++) {
		if(inwalk[i] == root) {
			break;
		}
	}
	node[root].left = reconst(prewalk + 1, inwalk, i);
	node[root].right = reconst(prewalk + i, inwalk + i + 1, n - i - 1);
	return root;
}

void post(int curr)
{
	if(node[curr].left != -1) post(node[curr].left);	
	cout<<node[curr].value;
	if(node[curr].right != -1) post(node[curr].right);	
}

int main()
{
	int i, n;
	cin >> n;
	int *prewalk = new int[n];
	int *inwalk = new int[n];
	for(i = 0; i < 41; i ++) {
		node[i].left = node[i].right = -1;
	}
	for(i = 0; i < n; i ++) {
		cin >> prewalk[i];
	}
	for(i = 0; i < n; i ++) {
		cin >> inwalk[i];
	}
	int root = reconst(prewalk, inwalk, n);
}
