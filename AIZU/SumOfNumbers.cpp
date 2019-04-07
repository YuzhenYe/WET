#include <iostream>
#include <string>
using namespace::std;

int main()
{
	string tmp;
	while(1) {
		cin>>tmp;
		if(tmp == "0") break;
		int tot = 0;
		for(int i = 0; i < tmp.length(); i ++) {
			string tmp2(1, tmp[i]);
			int j = stoi(tmp2);
			int k = int(tmp[i]);
			tot += j;
		}
		cout<<tot<<endl;
	}
}
