

const double wKingTableMid[6][5] = {
  { 0.3, 0.4, 0.5, 0.4, 0.3 },
  { 0.5, 0.7, 0.7, 0.7, 0.5 },
  { 0.5, 0.7, 0.7, 0.7, 0.5 },
  { 0.85,   0.9,   0.9,  0.9, 0.85 },
  { 0.85,   0.9,   0.9,   0.9, 0.85 },
  { 0.7,  0.95,   0.9,  0.95, 0.8 }
};
const double wQueenTable[6][5] = {
  { 0.8,  0.9,   0.9,   0.9, 0.8 },
  { 0.9,  0.9,   1,   0.9, 0.9 },
  { 0.9 , 1 ,  1.1,     1, 0.9 },
  { 0.9,   1,   1,     1, 0.9 },
  { 0.85,   1,   1,   1, 0.85 },
  { 0.8,  0.9,   0.9,  0.9, 0.8 }
};
const double wRookTable[6][5] = {
  {   1,   1,   1,   1,   1 },
  {   1,  1.1,   1.1,   1.1,   1 },
  {  0.9,   1,   1,   1,  0.9 },
  {  0.9,   1,   1,   1,  0.9 },
  {  0.9,   1,   1,   1,  0.9 },
  {   1,   1,   1,   1,   1 }
};
const double wBishopTable[6][5] = {
      {   1,   1,   1,   1,   1 },
  { 0.8,  0.9,  0.9,  0.9, 0.8 },
  {  0.9,   1,   1,   1,  0.9 },
  {  0.9,   1,   1,   1,  0.9},
  {  0.9,   1,   1,   1,  0.9 },
  { 0.8,  0.9,   0.9,  0.9, 0.8 },

};
const double wKnightTable[6][5] = {
  { 0.85, 0.8, 0.8, 0.8, 0.85 },
  {   0.95, 0.95,  1, 0.95,   0.95 },
  {  0.8,  1,  1.1,  1,  0.8 },
  {   0.95, 0.95,  1, 0.95,   0.95 },
  { 0.85,  0.95, 0.8,  0.95, 0.85 },  
  { 0.8,  0.95, 0.8,  0.95, 0.8 }
};

const double wPawnTable[6][5] = {
  {   1,   1,   1,   1,   1 },
 {  0.95,  0.95,  0.95,   1.1,   0.95 },
   {  0.9,  0.95, 0.8,  1.2,  0.95 },
 {  0.7, 0.7, 0.7,  1.2,  0.85 },
   { 0.7, 0.8, 0.8,  1.2,  1.3 },
  {   1,   1,   1,   1,   1 }
};
// Black's Piece-Square Tables
const double bKingTableMid[6][5] = { 
  { 0.7,  0.95,   0.9,  0.95, 0.8 },
  { 0.85,   0.9,   0.9,  0.9, 0.85 },
  { 0.85,   0.9,   0.9,   0.9, 0.85 },
  { 0.5, 0.7, 0.7, 0.7, 0.5 },
  { 0.5, 0.7, 0.7, 0.7, 0.5 },
  { 0.3, 0.4, 0.5, 0.4, 0.3 },
};

const double bQueenTable[6][5] = {
  { 0.8,  0.9,   0.9,   0.9, 0.8 },
  { 0.85,   1,   1,   1, 0.85 },
  { 0.9,   1,   1,     1, 0.9 },
  { 0.9 , 1 ,  1.1,     1, 0.9 },
  { 0.9,  0.9,   1,   0.9, 0.9 },
  { 0.8,  0.9,   0.9,  0.9, 0.8 }
};

const double bRookTable[6][5] = {
  {   1,   1,   1,   1,   1 },
  {  0.9,   1,   1,   1,  0.9 },
  {  0.9,   1,   1,   1,  0.9 },
  {  0.9,   1,   1,   1,  0.9 },
  {   1,  1.1,   1.1,   1.1,   1 },
  {   1,   1,   1,   1,   1 }
};
const double bBishopTable[6][5] = {
  { 0.8,  0.9,  0.9,  0.9, 0.8 },
  {  0.9,   1,   1,   1,  0.9 },
  {  0.9,   1,   1,   1,  0.9},
  {  0.9,   1,   1,   1,  0.9 },
  { 0.8,  0.9,   0.9,  0.9, 0.8 },
  {   1,   1,   1,   1,   1 }
};
const double bKnightTable[6][5] = {
  { 0.8,  0.95, 0.8,  0.95, 0.8 },
  { 0.85,  0.95, 0.8,  0.95, 0.85 },  
  {   0.95, 0.95,  1, 0.95,   0.95 },
  {  0.8,  1,  1.1,  1,  0.8 },
  {   0.95, 0.95,  1, 0.95,   0.95 },
  { 0.85, 0.8, 0.8, 0.8, 0.85 }

};
const double bPawnTable[6][5] = {
  {   1,   1,   1,   1,   1 },
  { 0.7, 0.8, 0.8,  1.2,  1.3 },
  {  0.7, 0.7, 0.7,  1.2,  0.85 },
  {  0.9,  0.95, 0.8,  1.2,  0.95 },
  {  0.95,  0.95,  0.95,   1.1,   0.95 },
  {   1,   1,   1,   1,   1 }
};