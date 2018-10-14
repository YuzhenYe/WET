# USACO

## [website](http://www.usaco.org); [training site](http://train.usaco.org/usacogate)

## sample C++ code
```
/*
ID: your_id_here
TASK: test
LANG: C++                 
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("test.out");
    ifstream fin ("test.in");

    int a, b;

    fin >> a >> b;
    fout << a+b << endl;

    return 0;
}

## notes
###LANG can be C++11 or C++14 for those more recent releases
###Use the slash-star style comments (for ID, TASK and LANG)
###Use return 0
###Use fstream in and out
```
ifstream fin("test.in");
//then fin can be used just like cin
fin >> a >> b;
```
ofstream fout("test.in");
//then fout can be used just like cout
fout<< a + b << end;
```
If the task ID is "test", then the input file will be test.in, and output file is test.out;
If the task ID is "ride", then the input file will be ride.in, and output file is ride.out.
### check the end of input (and how it is different from cin)
```
//fin.eof() check if reaches the end of the file (fin)
//the while loop termnates when the file reaches the end
while(!fin.eof()) {
	//statements
	string something;
	fin >> something;
}
```
vs cin
```
while(1) {
	string something;
	cin >> something;
	if(something == "done") break;
}

## problem types
```
Programming Contest Problem Types
Hal Burch conducted an analysis over spring break of 1999 and made an amazing discovery: there are only 16 types of programming contest problems! Furthermore, the top several comprise almost 80% of the problems seen at the IOI. Here they are:

Dynamic Programming
Greedy
Complete Search
Flood Fill
Shortest Path
Recursive Search Techniques
Minimum Spanning Tree
Knapsack
Computational Geometry
Network Flow
Eulerian Path
Two-Dimensional Convex Hull
BigNums
Heuristic Search
Approximate Search
Ad Hoc Problems
The most challenging problems are Combination Problems which involve a loop (combinations, subsets, etc.) around one of the above algorithms - or even a loop of one algorithm with another inside it. These seem extraordinarily tricky to get right, even though conceptually they are ``obvious''.

If you can master solving just 40% of these problem types, you can almost guarantee a silver medal at the IOI. Mastering 80% moves you into the gold range almost for sure. Of course, `mastery' is a tough nut to crack! We'll be supplying a plethora of problems so that you can hone your skills in the quest for international fame.
```

## Ad hoc problems
```
Ad Hoc Problems
`Ad hoc' problems are those whose algorithms do not fall into standard categories with well-studied solutions. Each ad hoc problem is different; no specific or general techniques exist to solve them.

Of course, this makes the problems the `fun' ones, since each one presents a new challenge. The solutions might require a novel data structure or an unusual set of loops or conditionals. Sometimes they require special combinations that are rare or at least rarely encountered.

Ad hoc problems usually require careful reading and usually yield to an attack that revolves around carefully sequencing the instructions given in the problem.

Ad hoc problems can still require reasonable optimizations and at least a degree of analysis that enables one to avoid loops nested five deep, for example.

More ad hoc problems appear on this web site than any other kind of problem. Always be ready for an ad hoc problem if you can not classify a problem as one of the other standard types (to be listed later).
```
