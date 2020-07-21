#include <iostream>
#include <list>
#include <queue>
using namespace::std;

int main()
{
	queue<int> q;
	q.push(1);
	int f = q.front();
	cout<<f<<endl;
	q.pop();
	q.push(2);
	f = q.front();
	cout<<f<<endl;

	//adj -- an array of 1000 elements, each element is a list of integers
	//e.g., adj[1000] can be used to represent adjacency list of a graph with 1000 nodes
	list<int> adj[1000];	
	// adj[0] -- adjacency list of node 0, storing all the direct neighbors of node 0
	// adj[1] -- adjacenty list of node 1, storing all the direct neighbors of node 1
	//edge fm - to	
	//adj[fm].push(to)
	//adj[to].push(fm)
	//for example: edge 0 - 1
	adj[0].push(1) // 1 is one of node 0's neighbor
	adj[1].push(0) // 0 is one of node 1's neighbor

	cout<<"adjacent list"<<endl;
	//use iterator to go through the neighbors of node 0, one at a time, starting from the beginning, until to the end
	for(list<int>::iterator it = adj[0].begin(); it != adj[0].end(); it ++) {
		//*it is one of 0 node's neighbors
		cout<<*it<<endl;
	}
}
