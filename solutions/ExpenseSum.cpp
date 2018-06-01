#include <iostream>
#include <fstream>
using namespace::std;

int getSum(int length, int nums[])
{
	int tot = 0;
	for(int i = 0; i < length; i ++) tot += nums[i];
	return tot;
}

int main(int argc, char *argv[])
{
	if(argc < 2) {
		cout<<"usage: "<<argv[0]<<" expense-file"<<endl;
		return 0;
	}
	fstream inf(argv[1]);
	if(!inf.is_open()) {
		cout<<"cannot open file"<<endl;
		return 0;
	}
	string aline;
	int expenses[100];
	int length = 0;
	while(getline(inf, aline)) {
		cout<<aline<<endl;
		expenses[length ++] = atoi(aline.c_str());
		//expenses[length ++] = stoi(aline);
	}
	inf.close();
	int result = getSum(length, expenses);
	cout<<"total expense "<<result<<endl;
}
