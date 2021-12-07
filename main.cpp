/* what i need to make tictactoe
1.(done) board
2. (done)players (user and a computer)
3. (only done for user bot is still remaining)algorithm to register move
4. check how wins 
5. run until someone wins
*/
#include "helper.h"
#include <stdlib.h>
#include <unistd.h>

bool checkplace(int playerEntry);
int main()
{
    int player, bot;
    char board[row][column];
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
            if (checkplace(player, board) == true)
            {
                board[player / row][player % column] = 'X';
                break;
            }
        }
        system("CLS");
        showBoard(board);
        cout << "!!!!BOT turn!!!\n";
        sleep(2);
        system("CLS");

        while (true)
        {
            bot = rand() % 9;
            if (checkplace(bot, board) == true)
            {
                board[bot / row][bot % column] = 'O';
                break;
            }
        }
        showBoard(board);

    } while (true);
}
