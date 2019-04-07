#include <iostream>
#include <algorithm>
using namespace::std;

typedef struct team {
	long id;
	int solved;
} team;

bool compare(team t1, team t2) {
	return t1.solved > t2.solved;
}

int main()
{
	int n;
	cin >> n; 
	team *t = new team[n];
	for(int i = 0; i < n; i ++) {
		cin>>t[i].id>>t[i].solved;
	}	
	sort(t, t + n, compare);
	for(int i = 0; i < n; i ++) {
		cout<<t[i].id<<" "<<t[i].solved<<endl;
	}
}
