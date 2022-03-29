#define _CRT_SECURE_NO_WARNINGS
#include "Game.h"

int main()
{
	
	Game g;
	g.run();
	return 0;
}

//TODO

//in game::run - add while inside while + kbhit result switch
//pick one direction (e.g. right)
// add 2 methods to bigship:
    // move - param: Point diff.
    // updates the pos of bigship - gotoxy and print on screen the ship in the new location