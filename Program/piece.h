#ifndef __PIECE_H__
#def __PIECE_H_

#include <string>
#include "player.h"
#include <cctype>
#include <iostream>


// The identification number of Piece types
const int BOMB =  'B';
const int MARSHAL = 1;
const int GENERAL = 2;
const int COLONEL = 3;
const int MAJOR = 4;
const int CAPTAIN = 5;
const int LIEUTENANT = 6;
const int SERGEANT = 7;
const int SAPPER = 8;
const int SCOUT = 9;
const int SPY = 'S';
const int FLAG = 'F';
const int WATER = -3;

// Total number of each Piece type at the start of game
const int amtBOMB =  6;
const int amtMARSHAL = 1;
const int amtGENERAL = 1;
const int amtCOLONEL = 2;
const int amtMAJOR = 3;
const int amtCAPTAIN = 4;
const int amtLIEUTENANT = 4;
const int amtSERGEANT = 4;
const int amtSAPPER = 5;
const int amtSCOUT = 8;
const int amtSPY = 1;


struct Piece{
	protected:
	int file;
	int rank;
	struct player* owner;
	int type;
	public:
	Piece(int type, int file, int rank, struct player* owner);
	~Piece();
	int getFile();
	int getRank();
	int getType();
	struct player* getOwner();
	void moveTo(int file , int rank);
	
};


#endif


