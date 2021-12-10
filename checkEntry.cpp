#include "helper.h"
bool checkPlace(int playerEntry, char board[row][column])
{
    if (board[playerEntry / row][playerEntry % column] == '-')
    {
        return true;
    }
    else
    {
        return false;
    }
}