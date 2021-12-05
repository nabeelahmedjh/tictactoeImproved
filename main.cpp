/* what i need to make tictactoe
1.(done) board
2. (done)players (user and a computer)
3. (only done for user bot is still remaining)algorithm to register move
4. check how wins 
5. run until someone wins
*/
#include "helper.h"
int player, bot;
bool checkplace(int playerEntry);
int main()
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            board[i][j] = '-';
        }
    }
    do
    {
        showBoard(board);
        cout << "Enter (1-9): ";

        while (true)
        {
            cin >> player;
            player--;
            if (checkplace(player) == true)
            {
                board[player / row][player % column] = 'X';
                break;
            }
        }

    } while (true);
}
