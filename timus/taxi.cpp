#include <iostream>
using namespace::std;

int main()
{
	int petr_start, petr_add, driver_start, driver_min;
	cin >> petr_start >> petr_add >> driver_start >> driver_min;
	int petr_now, driver_now, deal;
	bool petr_turn = true;
	deal = 0;
	petr_now = petr_start;
	driver_now = driver_start;
	if(driver_now < petr_now) {
		cout<<petr_now<<endl;	
		return 0;
	}	
	while(1) {
		//cout<<"petr-turn "<<petr_turn<<" "<<petr_now<<" "<<driver_now<<endl;
		if(!petr_turn) { //driver's turn
			if(driver_now - driver_min < petr_now) {
				deal = petr_now;
				break;
			}
			driver_now -= driver_min;
		}	
		else { //petr's turn
			if(petr_now + petr_add > driver_now) {
				deal = driver_now;
				break;
			}
			petr_now += petr_add;
		}
		petr_turn = !petr_turn;	
	}
	cout<<deal<<endl;
}
