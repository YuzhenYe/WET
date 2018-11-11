#include <iostream>
#include <fstream>

using namespace::std;

typedef struct scoreboard
{
	string name;
	int score;
} scoreboard;

int scorecmp(scoreboard a, scoreboard b)
{
	return a.score < b.score;
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
	//qsort(sb, n, sizeof(scoreboard), scorecmp);
	//comparing to qsort (c quicksort), sort (C++ quicksort) is simpler to write
	//usage: sort(array, array + n, comparefunc)
	//where n is the number of elements in array to be sorted
	sort(sb, sb + n, scorecmp); //this sorts the entire array
	for(i = 0; i < n; i ++) {
		cout<<sb[i].name<<" "<<sb[i].score<<endl;
	}
}
