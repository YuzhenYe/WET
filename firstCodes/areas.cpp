#include <iostream>

namespace circle 
{
	const double pi = 3.1415926;
	double computeArea(double r) { return (pi * r * r); }
}

namespace square
{
	double computeArea(double r) { return (r * r); }
}

int main() 
{
	double r = 4;
	//same function name area(), but no comflicts, as they are defined in two namespaces

	std::cout << circle::computeArea(4) << std::endl;
	std::cout << square::computeArea(4) << std::endl;
}
