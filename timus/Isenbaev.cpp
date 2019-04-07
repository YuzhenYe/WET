#include <iostream>
#include <queue>
#include <algorithm>

using namespace::std;

typedef struct player 
{
	string name;	
	int number;
} player;

int comp(player p1, player p2)
{
	return p1.name < p2.name;
}

int tot = 0; 
player pl[300];
bool sameteam[300][300];

int checkplayer(string name_inp, bool add)
{
	int i;
	for(i = 0; i < tot; i ++) {
		if(name_inp == pl[i].name) return i;
	}
	if(add) {
		pl[tot].name = name_inp;
		pl[tot].number = 1000;
		for(i = 0; i < tot; i ++) sameteam[i][tot] = sameteam[tot][i] = false;
		tot ++;
		return tot - 1;
	}
	else {
		return -1;
	}	
}

void bfs(int s)
{
	queue<int> tovisit;
	tovisit.push(s);
	while(!tovisit.empty()) {
		int w = tovisit.front();	
		tovisit.pop();
		for(int i = 0; i < tot; i ++) {
			if((pl[i].number == 1000) && sameteam[w][i]) {
				pl[i].number = pl[w].number + 1;
				tovisit.push(i);
			}
		}
	}
}

int main()
{
	int i, n;
	string name1, name2, name3;
	cin >> n;
	for(i = 0; i < n; i ++) {
		cin >> name1 >> name2 >> name3;
		int idx1 = checkplayer(name1, true);
		int idx2 = checkplayer(name2, true);
		int idx3 = checkplayer(name3, true);
		sameteam[idx1][idx2] = sameteam[idx2][idx1] = 1;
		sameteam[idx1][idx3] = sameteam[idx3][idx1] = 1;
		sameteam[idx2][idx3] = sameteam[idx3][idx2] = 1;
	}
	int s = checkplayer("Isenbaev", false);
	if(s != -1) {
		pl[s].number = 0;
		bfs(s);
	}
	sort(pl, pl + tot, comp);
	for(i = 0; i < tot; i ++) {
		if(pl[i].number == 1000) 
			cout<<pl[i].name<<" undefined"<<endl;
		else
			cout<<pl[i].name<<" "<<pl[i].number<<endl;
	}
}
