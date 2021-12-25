#include <iostream>
using namespace std;

// intializing the size of the board
const int row = 3, column = 3;

// function used to check whether the place that user/bot pick is available or not
bool checkPlace(int playerEntry, char board[row][column]);

// function for printing the board
void showBoard(char board[row][column]);

// function that checks that game is over/draw/someone wins the game
bool winCheck(char board[row][column]);

// function used to add colors into the terminal for making game pretty
void addColor(int key);

// helper function for addColor function
void applyColor(char indexValue);