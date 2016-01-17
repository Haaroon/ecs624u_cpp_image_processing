#include <iostream>
#include "building.h"
#include "house.h"
using namespace std; 

int main()
{
	cout << "LOL" << endl;
	house mine = house::house("Haaroons", 4, 3, 2, 3, 140);
	house nans = house::house("nans", 5, 2, 2, 2, 130);
	cout << "First house, \n\t Name: " << mine.getName() << "\n\t Bedrooms: " << mine.getBedrooms() << "\n\t Bathrooms: " << mine.getBathrooms() << "\n\t Floors : "  << mine.getFloors() << "\n\t Area: " << mine.getArea() << endl;
	cout << "Second house, \n\t Name: " << nans.getName() << "\n\t Bedrooms: " << nans.getBedrooms() << "\n\t Bathrooms: " << nans.getBathrooms() << "\n\t Floors : "  << nans.getFloors() << "\n\t Area: " << nans.getArea() << endl;

	cout << "House with largest area : ";
	if(mine.getArea() > nans.getArea())
		cout << mine.getName() << endl;
	else
		cout << nans.getName() << endl;

	return 0;
}