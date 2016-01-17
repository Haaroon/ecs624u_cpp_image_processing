#include "house.h"
#include <string>
using namespace std;

house::house()
{
	bedrooms = 0;
	bathrooms = 0;
	name = "";
	building::building(0, 0, 0);
}

//finish the methods
house::house(string name_, int bedrooms_, int bathrooms_, int rooms_, int floors_, int area_)
{
	name = name_;
	bedrooms = bedrooms_;
	bathrooms = bathrooms_;
	building::building(rooms_, floors_, area_);
}

string house::getName()
{
	return name;
}

void house::setName(string name_)
{
	name = name_;
}

int house::getBedrooms()
{
	return bedrooms;
}

void house::setBedrooms(int bedrooms_)
{
	bedrooms = bedrooms_;
}

int house::getBathrooms()
{
	return bathrooms;
}

void house::setBathrooms(int bathrooms_)
{
	bathrooms = bathrooms_;
}