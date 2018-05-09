#include <iostream>
using namespace::std;

int main(int argc, char *argv[])
{
	int num = stoi(argv[1]);
	int flist[100];
	flist[0] = 0;
	flist[1] = 1;
	for(int i = 2; i < num+1; i ++) {
		flist[i] = flist[i-1]+flist[i-2];
	}	
	cout<<flist[num]<<endl;
}
