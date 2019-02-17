#include <iostream>
using namespace::std;
void enumerate(int n, int *partner, string* names)
{
	int i, j;
	for(i = 0; i < n; i ++) {
		if(partner[i] == -1) break;
	}
	if(i == n) { //all paired
		for(i = 0; i < n; i ++) {
			cout<<names[i]<<"-"<<names[partner[i]]<<" ";
		}
		cout<<endl;
		return;
	}
	for(j = i + 1; j < n; j ++) {	
		if(partner[j] != -1) continue;
		//enumerate each time only forms a pair
		partner[i] = j;
		partner[j] = i;

		//and let enumerate() function take care of the rest
		enumerate(n, partner, names);

		//break pairing between i and j, to let i pair with other unpaired person
		partner[i] = partner[j] = -1;
	}
}

int main()
{
	int i, n;
	cin >> n;
	string names[100];	
	for(i = 0; i < n; i ++) cin >> names[i];
	int partner[100];
	for(i = 0; i < n; i ++) partner[i] = -1;
	enumerate(n, partner, names);
}
