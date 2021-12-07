#include "helper.h"
bool checkplace(int playerEntry, char board[row][column])
{
    if (board[playerEntry / row][playerEntry % column] == '-')
    {
        return true;
    }
    else
    {
        cout << "Enter a valid remaining option: ";
        return false;
    }
}