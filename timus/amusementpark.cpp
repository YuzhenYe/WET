#include <iostream>
using namespace::std;

int main()
{
	int value[] = {10, 50, 100, 500, 1000, 5000};
	int per;
	int notes[6];
	cin >> notes[0] >> notes[1] >> notes[2] >> notes[3] >> notes[4] >> notes[5] >> per;
	int i, j;
	int add = 0;
	for(i = 0; i < 6; i ++) if(notes[i] > 0) break; 
	for(j = i; j < 6; j ++) {
		add += notes[j] * value[j];
	}
	int maxt = add / per;
	int mint = (add - value[i]) / per + 1;
	cout<<maxt - mint + 1<<endl;
	for(i = mint; i <= maxt; i ++) {
		cout<<i<<" ";
	} 
	cout<<endl;
}
