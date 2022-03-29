#pragma once



const int ROWS = 25;
const int COLS = 80;
const char WALL_CHAR = 'O';
const char BigShip_CHAR = '#';
const char SmallShip_CHAR = '@';

enum Color
{
	BLACK = 0, 
	BLUE = 1, 
	GREEN = 2, 
	CYAN = 3, 
	RED = 4, 
	MAGENTA = 5, 
	BROWN = 6, 
	LIGHTGREY = 7, 
	DARKGREY = 8,
	LIGHTBLUE = 9, 
	LIGHTGREEN = 10, 
	LIGHTCYAN = 11, 
	LIGHTRED = 12, 
	LIGHTMAGENTA = 13, 
	YELLOW = 14, 
	WHITE = 15
};

struct Point
{
	int x;
	int y;
};