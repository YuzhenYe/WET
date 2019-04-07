#include <iostream>
#include <algorithm>
using namespace::std;

typedef struct team {
	long id;
	int solved;
} team;

void swap(team &t1, team &t2)
{
	team tmp;
	tmp.id = t1.id;
	tmp.solved = t1.solved;
	t1.id = t2.id;
	t1.solved = t2.solved;
	t2.id = tmp.id;
	t2.solved = tmp.solved;
}

int main()
{
	int n;
	cin >> n; 
	team *t = new team[n];
	team tmp;
	for(int i = 0; i < n; i ++) {
		cin>>t[i].id>>t[i].solved;
	}	
	for(int i = 0; i < n - 1; i ++) {
		for(int j = 0; j < n - i - 1; j ++) {
			if(t[j].solved < t[j+1].solved) {
				swap(t[j], t[j+1]);
			}
		}
	}
	//cout<<"sorted..."<<endl;
	for(int i = 0; i < n; i ++) {
		cout<<t[i].id<<" "<<t[i].solved<<endl;
	}
}
