#include <iostream>
#include <string>
#include "ex5vector2d.h"
using namespace std;

void makeAndPrintVector(double x, double y)
{
	ex5vector2d h = ex5vector2d::ex5vector2d(x, y);
	cout << h.length() << endl;
}

int main()
{
	makeAndPrintVector(3.0, 3.0);
	makeAndPrintVector(9.0, 15.0);
	makeAndPrintVector(6.0, 13.0);
	return 0;
}
