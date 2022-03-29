#pragma once


/*This calss contains the data in each cell in the board*/

enum cellType {EMPTY,WALL,SMALLBLOCK,BIGBLOCK};
enum shipType {SMALL,BIG};

const char dataType[4] = { ' ','O','S','B' };
const char ships[2] = { '@','#' };

class cellData
{
private:
	int dataType;
	int ship;

public:
	void setCellType() {};
	cellType getCellType() {};
	void setShipType() {};
	shipType getShipType() {};

};