#include <iostream>
using namespace::std;

int main()
{
	string seat;
	cin >> seat;
	char letter = seat[seat.length() - 1];
	seat.pop_back();
	int row = stoi(seat);
	if((row >= 1) && (row <= 2)) { //premium
		if((letter == 'A') || (letter == 'D')) cout<<"window"<<endl;
		else cout<<"aisle"<<endl;
	} 
	else if((row >= 3) && (row <= 20)) {
		if((letter == 'A') || (letter == 'F')) cout<<"window"<<endl;
		else if((letter == 'B') || (letter == 'C') || (letter == 'D') || (letter == 'E')) cout<<"aisle"<<endl;
		else cout<<"neither"<<endl;
	}
	else {
		if((letter == 'A') || (letter == 'K')) cout<<"window"<<endl;
		else if((letter == 'C') || (letter == 'D') || (letter == 'G') || (letter == 'H')) cout<<"aisle"<<endl;
		else cout<<"neither"<<endl;
		
	}
	return 0;
}
