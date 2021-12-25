#include "stdlib.h"
#include <string>
#include <unistd.h>
#include "helper.h"

int main()
{
    // asking user to start the game or not
    string start;
    cout << "==========WELCOME TO THE TIC-TAC-TOE GAME==========\n\n"
         << "Press any key to start the game\nPress '0' to quit the game\nYour choice: ";
    cin >> start;
    do
    {
        // if user enters the 0 then quiting the programming otherwise continue
        if (start == "0")
            return 0;

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

        // calling a function that will printout our board
        showBoard(board);
        cout << "YOUR ENTRY WILL CONSIDERED AS 'X'\nBOT WILL CONSIDERED AS 'O'\n";
        do
        {
            // taking entry from user and than checking that is valid or not, if not than asking again
            cout << "Enter (1-9): ";
            while (true)
            {
                cin >> player;
                player--;

                // checkplace function will check weather the entry is valid or not
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
            // the below command is used to clear anything that has been printed on the console so far
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

        // again asking user to continue playing or not
        cout << "Press any key to play the game again\nPress  '0' to quit\nYour choice: ";
        cin >> start;
    } while (!(start == "0"));

    return 0;
}
