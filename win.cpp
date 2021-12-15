#include "helper.h"

// function for printing the winner
void outputMessage(char board[row][column], int a, int b)
{
    if (board[a][b] == 'X')
    {
        addColor(3);
        cout << "\n\n!!!!!!!!!!!YOU WIN!!!!!!!!!" << endl;
        addColor(7);
    }
    else
    {
        addColor(12);
        cout << "\n\n!!!!!!!!!!!BOT WIN!!!!!!!!!!!!" << endl;
        addColor(7);
    }
}

// checking win
bool winCheck(char board[row][column])
{
    // checking win for all three rows
    for (int i = 0; i < row; i++)
    {
        if ((board[i][0] == 'X' && board[i][1] == 'X' && board[i][2] == 'X') || (board[i][0] == 'O' && board[i][1] == 'O' && board[i][2] == 'O'))
        {
            outputMessage(board, i, 0);
            return true;
        }
    }

    // checking win for all three column
    for (int i = 0; i < column; i++)
    {
        if ((board[0][i] == 'X' && board[1][i] == 'X' && board[2][i] == 'X') || (board[0][i] == 'O' & board[1][i] == 'O' && board[2][i] == 'O'))
        {
            outputMessage(board, 0, i);
            return true;
        }
    }

    // checking win for diagonals
    if ((board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') || (board[0][0] == 'O' & board[1][1] == 'O' && board[2][2] == 'O'))
    {
        outputMessage(board, 0, 0);
        return true;
    }
    if ((board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X') || (board[0][2] == 'O' & board[1][1] == 'O' && board[2][0] == 'O'))
    {
        outputMessage(board, 0, 2);
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