#include "Point.h"
#include "utils.h"


void Point::move()
{

}

void Point::erase()
{
	gotoxy(_x,_y);
	cout << " ";
}

void Point::draw()
{
	gotoxy(_x, _y);

}