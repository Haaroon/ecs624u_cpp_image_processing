//header guard at start of header file
#ifndef HOUSE_H
#define HOUSE_H

#include "building.h"
#include <string>
using namespace std;

class house: public building
{
private:
	string name;
	int bedrooms, bathrooms;

public:
	house();
	house(string name, int bedrooms_, int bathrooms_, int rooms_, int floors_, int area_);
	string getName();
	void setName(string name_);
	int getBedrooms();
	void setBedrooms(int bedrooms_);
	int getBathrooms();
	void setBathrooms(int bathrooms_);
};

//End guard at bottom of header file
#endif 