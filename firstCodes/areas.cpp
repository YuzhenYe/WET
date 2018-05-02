#include <iostream>

namespace circle 
{
	const double pi = 3.1415926;
	double area(double r) { return (pi * r * r); }
}

namespace square
{
	double area(double r) { return (r * r); }
}

int main() 
{
	double r = 4;
	//same function name area(), but no comflicts, as they are defined in two namespaces

	std::cout << circle::area(4) << std::endl;
	std::cout << square::area(4) << std::endl;
}
