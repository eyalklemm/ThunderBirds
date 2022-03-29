#include <windows.h>
#include <conio.h>
#include "Game.h"
#include "BigShip.h"
#include "Board.h"
#include "constants.h"

Game::Game() {
	_pBoard = new Board();
	_pBigShip = new BigShip(_pBoard->getBigShipPos() /*WHITE*/);
}


void Game::run() {

	_pBoard->printBoard();
	//while

	int dir;
	//Move all snakes until ESC is pressed
	/*while (!_kbhit() || _getch() != 27)
	{
		switch (dir)
		{

		}
		Sleep(400);
	}*/
}