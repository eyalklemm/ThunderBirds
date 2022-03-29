#pragma once
class Point
{
private:
	int _x;
	int _y;
	int _dirX;
	int _dirY;
public:

	Point() {};
	void move();
	void erase();
	void draw();

};

