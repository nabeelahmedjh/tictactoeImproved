/* what i need to make tictactoe
1. board
2. players (user and a computer)
3. algorithm to register move
4. check how wins 
5. run until someone wins
*/
#include <helper.h>

int main()
{
    int board[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            board[i][j] = 0;
        }
    }

    showBoard(board);
}