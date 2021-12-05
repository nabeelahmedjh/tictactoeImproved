#include "helper.h"
bool checkplace(int playerEntry)
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