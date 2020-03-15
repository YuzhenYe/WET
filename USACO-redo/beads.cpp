/*
ID: yuzheny2
LANG: C++
TASK: beads
*/

#include <fstream>
#include <iostream> 
using namespace::std;

int count(int n, string s)
{
	int fc = 0;	
	char last = 'w';
	for(int i = 0; i < n; i ++) {
		if(s[i] != 'w') {
			if(last == 'w') last = s[i];
			else if(s[i] != last) break;
		}
		fc += 1;
	}
	//cout<<"beads "<<s<<" "<<fc<<endl;
	return fc;
}

int main()
{
	int n;
	string s0;
	ifstream fin("beads.in");	
	ofstream fout("beads.out");	
	fin >> n;
	fin >> s0;
	int solution = 0;
	for(int b = 0; b < n; b ++) {
		string s = "";
		string sr = "";
		for(int i = b; i < n; i ++) {
			s += s0[i];
			sr = s0[i] + sr;
		}
		for(int i = 0; i < b; i ++) {
			s += s0[i]; 
			sr = s0[i] + sr;
		}
		int t = count(n, s) + count(n, sr);
		if(t > solution) solution = t;
		if(t >= n) break;
	}
	if(solution > n) solution = n;
	fout<<solution<<endl;
	fin.close();
	fout.close();
}
