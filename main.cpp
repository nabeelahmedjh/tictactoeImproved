#include "helper.h"
#include "stdlib.h"
#include <unistd.h>

int main()
{

    // declaring and intializing some required variables
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
    cout << "YOUR ENTRY WILL CONSIDERED AS 'X'\nBOT WILL CONSIDERED AS 'O'\n";
    do
    {
        // taking entry from user and than checking that valid or not, if not asking it asking for value again
        cout << "Enter (1-9): ";
        while (true)
        {
            cin >> player;
            player--;
            if (checkPlace(player, board) == true)
            {
                board[player / row][player % column] = 'X';
                break;
            }
            else
            {
                cout << " Enter a valid remaining option : ";
            }
        }
        //system("CLS");
        showBoard(board);

        // checking if gameover
        if (winCheck(board) == true)
            break;

        cout << "BOT is Thinking\n";

        // freezing program for 1 sec to show that bot is thinking
        sleep(1);
        cout << "!!!!BOT Turn!!!\n";

        // generating an entry for bot
        while (true)
        {
            bot = rand() % 9;
            if (checkPlace(bot, board) == true)
            {
                board[bot / row][bot % column] = 'O';
                break;
            }
        }
        showBoard(board);

    } while (winCheck(board) == false);

    return 0;
}
