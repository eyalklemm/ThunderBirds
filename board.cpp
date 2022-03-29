#include "board.h"


Point Board::getBigShipPos()
{
	int x, y;
	Point res = {-1,-1};
	for (y = 0; y < ROWS; y++)
	{
		for (x = 0; x < COLS; x++)
		{
			if (helper_board[y][x] == BigShip_CHAR)
			{
				res.x = x;
				res.y = y;
				return res;
			}
		}
	}

	return res;//in case we could not find this in teh board. should not happen really...
}


/*
void Board::initBoard()
{
	int x, y;
	for (y = 0; y < ROWS; y++)
	{
		for (x = 0; x < COLS; x++)
		{
			if (y == 0 || y == ROWS - 1 || x == 0 || x == COLS-1)
			{
				//TODO - fix
				//mask_board[y][x] = WALL_CHAR;
			}
		}
		
	}
}
*/

void Board::printBoard(int color)
{
	int x, y;
	for (y = 0; y <ROWS; y++)
	{
		for (x = 0; x < COLS; x++) 
		{
			cout << this->helper_board[y][x];
		}
		cout << endl;
	}
}