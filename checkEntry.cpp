#include "helper.h"

// initializing the function that will check weather the entry is valid or not
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