/* what i need to make tictactoe
1.(done) board
2. (done)players (user and a computer)
3. (only done for user bot is still remaining)algorithm to register move
4. check how wins 
5. run until someone wins
*/
#include "helper.h"
#include "stdlib.h"
#include "conio.h"
#include <unistd.h>

bool checkplace(int playerEntry);
int main()
{
    int player, bot;
    bool win = false;
    char board[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            board[i][j] = '-';
        }
    }
    showBoard(board);
    do
    {

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
            else
            {
                cout << " Enter a valid remaining option : ";
            }
        }
        system("CLS");
        showBoard(board);
        if (wincheck(board) == true)
            break;

        cout << "BOT is Thinking\n"
             << "!!!!BOT Turn!!!\n";
        sleep(1);

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

    } while (wincheck(board) == false);

    return 0;
}
