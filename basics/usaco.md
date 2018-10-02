# USACO

## website[]

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

