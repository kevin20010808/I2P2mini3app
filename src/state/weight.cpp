const int wKingTableMid[6][5] = {
    -50,-50,-40,-40,-30,
    -50,-50,-40,-40,-30,
    -50,-50,-40,-40,-30,
    -10,-20,-20,-20,-20,
     20, 20,  0,  0,  0,
     20, 30, 10,  0,  0
};
const int wQueenTable[6][5] = {
     -5, -5,-10,-10,-20,
      0,  0,  0,  0,-10,
      5,  5,  5,  0,-10,
    -10,  5,  5,  5,  5,
    -10,  0,  5,  0,  0,
    -20,-10,-10, -5, -5
};
const int wRookTable[6][5] = {
      0,  0,  0,  0,  0,
     10, 10, 10, 10,  5,
      0,  0,  0,  0, -5,
     -5,  0,  0,  0,  0,
     -5,  0,  0,  0,  0,
      0,  0,  0,  5,  5
};
const int wBishopTable[6][5] = {
    -10,-10,-10,-10,-20,
      0,  0,  0,  0,-10,
     10, 10,  5,  0,-10,
    -10, 10, 10, 10, 10,
    -10,  5,  0,  0,  0,
    -20,-10,-10,-10,-10
};
const int wKnightTable[6][5] = {
    -30,-30,-30,-40,-50,
      0,  0,  0,-20,-40,
     15, 15, 10,  0,-30,
    -30,  5, 10, 15, 15,
    -40,-20,  0,  5,  5,
    -50,-40,-30,-30,-30
};
const int wPawnTable[6][5] = {
      0,  0,  0,  0,  0,
     50, 50, 50, 50, 50,
     30, 30, 20, 10, 10,
      5, -5,-10,  0,  0,
      5, 10, 10,-20,-20,
      0,  0,  0,  0,  0
};

// Black's Piece-Square Tables
const int bKingTableMid[6][5] = {
      0,  0, 10, 30, 20,
      0,  0,  0, 20, 20,
    -20,-20,-20,-20,-10,
    -30,-40,-40,-50,-50,
    -30,-40,-40,-50,-50,
    -30,-40,-40,-50,-50,
};
const int bQueenTable[6][5] = {
     -5, -5,-10,-10,-20,
      0,  0,  0,  0,-10,
      5,  5,  5,  0,-10,
    -10,  5,  5,  5,  5,
    -10,  0,  5,  0,  0,
    -20,-10,-10, -5, -5
};
const int bRookTable[6][5] = {
      5,  5,  0,  0,  0,
      0,  0,  0,  0, -5,
      0,  0,  0,  0, -5,
     -5,  0,  0,  0,  0,
      5, 10, 10, 10, 10,
      0,  0,  0,  0,  0
};
const int bBishopTable[6][5] = {
    -10,-10,-10,-10,-20,
      0,  0,  0,  5,-10,
     10, 10, 10, 10,-10,
    -10,  0,  5, 10, 10, 
    -10,  0,  0,  0,  0,
    -20,-10,-10,-10,-10
};
const int bKnightTable[6][5] = {
    -30,-30,-30,-40,-50,
      5,  5,  0,-20,-40,
     15, 15, 10,  5,-30,
    -30,  0, 10, 15, 15,
    -40,-20,  0,  0,  0,
    -50,-40,-30,-30,-30
};
const int bPawnTable[6][5] = {
      0,  0,  0,  0,  0,
    -20,-20, 10, 10,  5,
      0,  0,-10, -5,  5,
     10, 10, 20, 30, 30,
     50, 50, 50, 50, 50, 
      0,  0,  0,  0,  0
};