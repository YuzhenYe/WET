#include <iostream>
#include <string>
using namespace::std;

int main() 
{
	string *words = new string[1000000];
	int tot;
	cin >> tot;
	int add = 0;
	string action, word;
	for(int i = 0; i < tot; i ++) {
		cin >> action;
		if(action == "insert") cin >> words[add ++]; 
		else {
			cin >> word;
			int iffind = false;
			for(int j = 0; j < tot; j ++) {
				if(words[j] == word) {
					iffind = true;
					cout<<"yes"<<endl;
					break;
				}
			}
			if(!iffind) cout<<"no"<<endl;
		}
	}
}
