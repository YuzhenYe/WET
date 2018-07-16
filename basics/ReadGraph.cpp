#include <iostream>
#include <fstream>
using namespace::std;

int main(int argc, char *argv[])
{
	if(argc < 2) {
		cout<<"usage: "<<argv[0]<<" input-file"<<endl;
		exit(0);
	}
	ifstream file(argv[1]);
	if(!file.is_open()) {
		cout<<"open file error"<<endl;
		exit(0);
	}
	string line;
	getline(file, line);
	int node, edge;
	//the first line in the graph file shows the number of nodes & edges
	sscanf(line.c_str(), "%d%d", &node, &edge); //note: using &
	cout<<"expected node "<<node<<" edge "<<edge<<endl;
	int tot = 0;
	while(getline(file, line)) { //each line represents an edge, showing the IDs of the two nodes the edge connects
		int node1, node2;
		sscanf(line.c_str(), "%d%d", &node1, &node2);	
		cout<<"edge between "<<node1<<" "<<node2<<endl;
		tot ++;
	}
	file.close();
	if(tot == edge) {
		cout<<"Read file ok! expected edge "<<edge<<" actual read "<<tot<<endl;
	}
	else {
		cout<<"Wrong input file: expected edge "<<edge<<" actual read "<<tot<<endl;
		exit(0);
	}
	return 0;
}
