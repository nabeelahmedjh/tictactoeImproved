#include "helper.h"

void showBoard(char board[row][column])
{

     cout << "     |     |       \n"
          << "  ";
     applyColor(board[0][0]);
     cout << "  |  ";
     applyColor(board[0][1]);
     cout << "  |  ";
     applyColor(board[0][2]);
     cout << "  \n"
          << "     |     |       \n"
          << "------------------\n"
          << "     |     |       \n";
     cout << "  ";
     applyColor(board[1][0]);
     cout << "  |  ";
     applyColor(board[1][1]);
     cout << "  |  ";
     applyColor(board[1][2]);
     cout << "  \n"
          << "     |     |       \n"
          << "------------------\n"
          << "     |     |       \n"
          << "  ";
     applyColor(board[2][0]);
     cout << "  |  ";
     applyColor(board[2][1]);
     cout << "  |  ";
     applyColor(board[2][2]);
     cout << "  \n"
          << "     |     |       \n";
}
