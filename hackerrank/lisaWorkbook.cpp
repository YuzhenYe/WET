#include <iostream>
using namespace::std;

int main()
{
	int n, m, prob;
	cin >> n >> m;
	int totpage = 0;
	int solution = 0;
	for(int i = 0; i < n; i ++) {
		cin >> prob;
		int page = prob / m;		
		if(prob % m != 0) page += 1;
		int beg = totpage + 1;
		for(int c = 1; c <= prob; c ++) {
			if(c == beg) {
				solution += 1;
			}
			if(c % m == 0) {
				beg ++;
			}
		}
		totpage += page;
	}
	cout<<solution<<endl;
}
