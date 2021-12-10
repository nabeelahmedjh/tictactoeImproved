#include "helper.h"

bool wincheck(char board[row][column])
{
    // checking win for all three rows
    for (int i = 0; i < row; i++)
    {
        if ((board[i][0] == 'X' && board[i][1] == 'X' && board[i][2] == 'X') || (board[i][0] == 'O' && board[i][1] == 'O' && board[i][2] == 'O'))
        {
            if (board[i][0] == 'X')
                cout << "\n\n!!!!!!!!!!!PLAYER WIN!!!!!!!!!" << endl;
            else
                cout << "\n\n!!!!!!!!!!!BOT WIN!!!!!!!!!!!!" << endl;

            return true;
        }
    }

    // checking win for all three column
    for (int i = 0; i < column; i++)
    {
        if ((board[0][i] == 'X' && board[1][i] == 'X' && board[2][i] == 'X') || (board[0][i] == 'O' & board[1][i] == 'O' && board[2][i] == 'O'))
        {
            if (board[0][i] == 'X')
                cout << "\n\n!!!!!!!!!!!PLAYER WIN!!!!!!!!!" << endl;
            else
                cout << "\n\n!!!!!!!!!!!BOT WIN!!!!!!!!!!!!" << endl;

            return true;
        }
    }

    // checking win for diagonals
    if ((board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') || (board[0][0] == 'O' & board[1][1] == 'O' && board[2][2] == 'O'))
    {
        if (board[0][0] == 'X')
            cout << "\n\n!!!!!!!!!!!PLAYER WIN!!!!!!!!!" << endl;
        else
            cout << "\n\n!!!!!!!!!!!BOT WIN!!!!!!!!!!!!" << endl;

        return true;
    }
    if ((board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X') || (board[0][2] == 'O' & board[1][1] == 'O' && board[2][0] == 'O'))
    {
        if (board[0][2] == 'X')
            cout << "\n\n!!!!!!!!!!!PLAYER WIN!!!!!!!!!" << endl;
        else
            cout << "\n\n!!!!!!!!!!!BOT WIN!!!!!!!!!!!!" << endl;

        return true;
    }

    // checking if game still playable
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (board[i][j] == '-')
                return false;
        }
    }
    // if game reach this condition than the game is draw

    cout << "\n\nGAME DRAW!!\n";
    return true;
}