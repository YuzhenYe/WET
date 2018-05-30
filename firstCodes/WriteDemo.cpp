#include <iostream>
#include <fstream>
using namespace::std;

int main(int argc, char* argv[])
{
        if(argc < 2) {
                cout<<"Usage: "<<argv[0]<<" file-name"<<endl;
                return 0;
        }
	int nums[10] = {34, 100, 23, 36, 29, 102, 800, 78, 90, 100};
	ofstream out(argv[1]);
	if(out.is_open()) {
		for(int i = 0; i < 10; i ++) {
			out << nums[i] << endl;
		}
		out.close();
	}
	else {
		cout<<"cannot open nums.txt"<<endl;
	}
	return 0;
}
