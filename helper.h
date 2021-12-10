#include <iostream>
using namespace std;
const int row = 3, column = 3;
bool checkPlace(int playerEntry, char board[row][column]);
void showBoard(char board[row][column]);
bool winCheck(char board[row][column]);