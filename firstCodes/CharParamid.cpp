//this program is to draw paramid using the user given character
//e.g., if the user gives a, and 10 as the height
//the program produces:
/*
          a
         aaa
        aaaaa
       aaaaaaa
      aaaaaaaaa
     aaaaaaaaaaa
    aaaaaaaaaaaaa
   aaaaaaaaaaaaaaa
  aaaaaaaaaaaaaaaaa
 aaaaaaaaaaaaaaaaaaa
*/
#include <iostream>
using namespace::std;

int main() 
{
	char what;
	int size;
	cout << " character please: "<<endl;	
	cin >> what;
	cout << " height please: "<<endl;	
	cin >> size;
	int r, c;
	for(r = 0; r < size; r ++) {
		for(c = 0; c < size - r; c ++) {
			cout<<' ';
		}
		for(c = 0; c < 2*r+1; c ++) {
			cout<<what;
		}
		cout<<endl;
	}		
	return(0);
}
