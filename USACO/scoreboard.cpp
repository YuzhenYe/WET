#include <iostream>
#include <fstream>

using namespace::std;

typedef struct scoreboard
{
	string name;
	int score;
} scoreboard;

int scorecmp(const void *a, const void *b)
{
	//a and b are void pointers
	//(scoreboard *)a converts a to a pointer of scoreboard type
	//((scoreboard *)a) -> score, the -> notation
	return ( ((scoreboard *)a) -> score - ((scoreboard *)b) -> score);
}

int main()
{
	int i, n;
	ifstream fin("scoreboard.in");	
	fin >> n;
	scoreboard *sb = new scoreboard[n];
	for(i = 0; i < n; i ++) {
		fin >> sb[i].name;	
		sb[i].score = 0;
	} 	
	string name;
	int score;
	while(fin >> name >> score) {
		for(i = 0; i < n; i ++) {
			if(sb[i].name == name) sb[i].score += score;
		}
	}
	qsort(sb, n, sizeof(scoreboard), scorecmp);
	for(i = 0; i < n; i ++) {
		cout<<sb[i].name<<" "<<sb[i].score<<endl;
	}
}
