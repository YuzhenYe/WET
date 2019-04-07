#include <iostream>
using namespace::std;

int main()
{
	int lock1, lock2, lock;
	cin >> lock1 >> lock2;
	bool work = false;
	for(int i = 0; i <= 9999; i ++) {
		if(i % 2 == 0) lock = lock1;
		else lock = lock2;
		if(i == lock) {
			work = true;
			break;
		}
	} 
	if(work) cout<<"yes"<<endl;
	else cout<<"no"<<endl;
}
