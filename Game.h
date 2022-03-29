#pragma once

class BigShip;
class Board;

class Game
{
private:
	BigShip* _pBigShip;
	Board* _pBoard;

public:
	Game();
	void run();
};

