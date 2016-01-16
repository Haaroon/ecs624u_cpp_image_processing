//header guard at start of header file
#ifndef BUILDING_H
#define BUILDING_H

class building
{
private:
	int rooms, floors, area;

public:
	building();
	building(int rooms_, int floors_, int area_);
	int getRooms();
	void setRooms(int rooms_);
	int getFloors();
	void setFloors(int floors_);
	int getArea();
	void setArea(int area_);
};

//End guard at bottom of header file
#endif 