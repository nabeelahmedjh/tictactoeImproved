#include "helper.h"

// function for printing the winner
void outputMessage(char board[row][column], int a, int b)
{
    if (board[a][b] == 'X')
    {
        // 3 is for color green
        addColor(3);
        cout << "\n\n!!!!!!!!!!!YOU WIN!!!!!!!!!" << endl;
        // 4 is white
        addColor(7);
    }
    else
    {
        // 12 is red
        addColor(12);
        cout << "\n\n!!!!!!!!!!!BOT WIN!!!!!!!!!!!!" << endl;
        // 7 is white
        addColor(7);
    }
}

// checking win
bool winCheck(char board[row][column])
{

    for (int i = 0; i < row; i++)
    {
        // checking win for all three rows (here i is considered as row)
        if ((board[i][0] == 'X' && board[i][1] == 'X' && board[i][2] == 'X') || (board[i][0] == 'O' && board[i][1] == 'O' && board[i][2] == 'O'))
        {
            outputMessage(board, i, 0);
            return true;
        }

        // checking win for all three column (here i is considered as column)
        if ((board[0][i] == 'X' && board[1][i] == 'X' && board[2][i] == 'X') || (board[0][i] == 'O' & board[1][i] == 'O' && board[2][i] == 'O'))
        {
            outputMessage(board, 0, i);
            return true;
        }
    }

    // checking win for 1st diagonal
    if ((board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') || (board[0][0] == 'O' & board[1][1] == 'O' && board[2][2] == 'O'))
    {
        outputMessage(board, 0, 0);
        return true;
    }
    // checking win for 2nd diagonal
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