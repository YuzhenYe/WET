//see random at http://www.cplusplus.com/reference/random
#include <iostream>
#include <random>
using namespace::std;

int main()
{
	default_random_engine generator;
	uniform_int_distribution<int> distribution(1, 6); //ranges from 1 to 6	
	for(int i = 0; i < 20; i ++) {
		//generates a random number in the range 1 to 6 
		int pick = distribution(generator); 
		cout<<pick<<endl;
	}

	return 0;
}
