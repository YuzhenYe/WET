/*
TASK: combo
ID: yuzheny2
LANG: C++
*/
#include <iostream>
#include <fstream>
using namespace::std;

//t: try, n: answer, dial: total
bool isgood(int t, int n, int dial)
{
	int error = 2;	
	int s = (t < n)?t:n;
	int b = (t > n)?t:n;
	if(b - s <= error) return true;
	if(dial - b + s <= error) return true;
	return false; 
}

int main()
{
	int dial, f1, f2, f3, m1, m2, m3;
	ifstream fin("combo.in");
	ofstream fout("combo.out");
	fin >> dial >> f1 >> f2 >> f3 >> m1 >> m2 >> m3;
	int solution = 0;
	int n1, n2, n3;
	for(n1 = 1; n1 <= dial; n1 ++) {
		//compare with farmer's lock
		if(!(isgood(n1, f1, dial) || isgood(n1, m1, dial))) continue;
		for(n2 = 1; n2 <= dial; n2 ++) {
			if(!(isgood(n2, f2, dial) || isgood(n2, m2, dial))) continue;
			for(n3 = 1; n3 <= dial; n3 ++) {
				if(!(isgood(n3, f3, dial) || isgood(n3, m3, dial))) continue;
				if(isgood(n1, f1, dial) && isgood(n2, f2, dial) && isgood(n3, f3, dial)) {
					//cout<<n1<<","<<n2<<","<<n3<<endl;
					solution += 1;
				}
				else if(isgood(n1, m1, dial) && isgood(n2, m2, dial) && isgood(n3, m3, dial)) {
                                        //cout<<n1<<","<<n2<<","<<n3<<endl;
                                        solution += 1;
				}
			}	
		}
	}
	fout<<solution<<endl;
}
