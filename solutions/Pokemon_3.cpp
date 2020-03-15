#include <iostream>
using namespace::std;

class Pokemon
{
	private:
		string name;
		int power;
		int price;
	public:
		Pokemon() {
		}
		Pokemon(string name_in, int power_in, int price_in) {
			set(name_in, power_in, price_in);
		}
		void set(string name_in, int power_in, int price_in) {
			name = name_in;
			power = power_in;
			price = price_in;
		}
		string getName() {
			return name;
		}
		int getPrice() {
			return price;
		}
		int getPower() {
			return power;
		}
};

int compprice(Pokemon p1, Pokemon p2)
{
	return p1.getPrice() < p2.getPrice();
}
int comppower(Pokemon p1, Pokemon p2)
{
	return p1.getPower() < p2.getPower();
}

int main()
{
	int n, power, price;
	string what, name;
	cin >> n >> what;
	Pokemon *pk = new Pokemon[n];
	for(int i = 0; i < n; i ++) {
		cin >> name >> power >> price;	
		pk[i].set(name, power, price);
	}
	if(what == "power")
		sort(pk, pk + n, comppower);
	else
		sort(pk, pk + n, compprice);

	for(int i = 0; i < n; i ++) {
		cout<<pk[i].getName()<<" "<<pk[i].getPower()<<" "<<pk[i].getPrice()<<endl;
	}
}
