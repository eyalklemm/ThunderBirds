#pragma once
#include <Windows.h>
#include <iostream>
#include "cellData.h"
#include "constants.h"

using namespace std;


class Board
{

private:	
	//cellData mask_board[ROWS][COLS];
	char helper_board[ROWS][COLS] = 
	{
		{ "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO" },
		{ "O****************************  TIME    120  **********************************O" },
		{ "O*****************************************************************************O" },
		{ "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO" },
		{ "O   @@ O           OOOO                            OOOOOOOOOOOOOOOO           O" },
		{ "O ##   O           OOOO                            OOOOOOOOOOOOOOOO           O" },
		{ "O ##   O           OOOO                            OOOOOOOOOOOOOOOO           O" },
		{ "O      O           OOOO           OOOOOOOOOOOO     OOOOOOOOOOOOOOOO           O" },
		{ "O      O           OOOO           OOOO    OOOO     OOOOOOOOOOOOOOOO           O" },
		{ "O      O           B B            OOOO    OOOO     OOOOOOOOOOOOOOOO    OOOOOOOO" },
		{ "O      O           BBB            OOOO    OOOO                                 " },
		{ "O      O           OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO" },
		{ "O      O           OOOO                                                       O" },
		{ "O      O           OOOO                                **                     O" },
		{ "O      O           OOOO                               ****                    O" },
		{ "O      O           OOOO                              ******                   O" },
		{ "O      O           OOOOOOOOOOOOO                    ********                  O" },
		{ "O      O           OOOOOOOOOOOOO                   **********                 O" },
		{ "O      O           OOOOOOOOOOOOO                  ************                O" },
		{ "O      O                  OOOOOOOOOO             **************               O" },
		{ "O      O           SS           OOOO            ****************              O" },
		{ "O      OOOOOOOOOOOOOOOO         OOOO           ******************             O" },
		{ "O                               OOOO                                          O" },
		{ "O                               OOOO                                          O" },
		{ "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO" }
	};
	


public:
	void printBoard(int color = RED);
	Point getBigShipPos();

};

