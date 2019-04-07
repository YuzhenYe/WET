#include <iostream>
using namespace::std;
int generate(int n, string dna)
{
	if(dna.length() == n) {
		cout<<dna<<endl;	
		return 1;
	}
	else {
		string alphabet = "ATCG";
		int total = 0;
		for(int i = 0; i < 4; i ++) {
			dna = dna + alphabet[i];
			total += generate(n, dna);
			dna.pop_back();
		}
		return total;
	}
}

int main()
{
	int n;
	string dna;
	cin >> n;
	int total = generate(n, dna);
	cout<<"total "<<total<<endl;
}
