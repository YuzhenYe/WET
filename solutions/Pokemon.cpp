#include <iostream>
using namespace::std;

typedef struct
{
	string name;
	int power;
	int price;
} Pokemon;

int compprice(Pokemon p1, Pokemon p2)
{
	return p1.price < p2.price;
}
int comppower(Pokemon p1, Pokemon p2)
{
	return p1.power < p2.power;
}

int main()
{
	int n;
	string what;
	cin >> n >> what;
	Pokemon *pk = new Pokemon[n];
	for(int i = 0; i < n; i ++) {
		cin >> pk[i].name >> pk[i].power >> pk[i].price;	
	}
	if(what == "power")
		sort(pk, pk + n, comppower);
	else
		sort(pk, pk + n, compprice);

	for(int i = 0; i < n; i ++) {
		cout<<pk[i].name<<" "<<pk[i].power<<" "<<pk[i].price<<endl;
	}
}
