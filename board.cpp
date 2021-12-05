#include <helper.h>

void showBoard(int board[row][column])
{
    for (int i = 0; i < row; i++)
    {
        cout << "---------------------" << endl;
        for (int j = 0; j < column; j++)
        {
            cout << "|  " << board[i][j] << "  |";
        }
        cout << endl;
    }
    cout << "---------------------" << endl;
}