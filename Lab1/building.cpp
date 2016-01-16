#include "building.h"

building::building()
{
	rooms = 0;
	floors = 0;
	area = 0;
}

building::building(int rooms_, int floors_, int area_)
{
	rooms = rooms_;
	floors = floors_;
	area = area_;
}

int building::getRooms()
{
	return rooms;
}

void building::setRooms(int rooms_)
{
	rooms = rooms_;
}

int building::getFloors()
{
	return floors;
}

void building::setFloors(int floors_)
{
	floors = floors_;
}

int building::getArea()
{
	return area;
}

void building::setArea(int area_)
{
	area = area_;
}