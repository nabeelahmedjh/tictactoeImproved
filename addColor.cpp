#include "helper.h"
#include <windows.h>

// a function that will change the console color according to the given key
void addColor(int key)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), key);
}

// a helper function which will help to apply color (useful for the board)
void applyColor(char indexValue)
{
    if (indexValue == 'X')
    {
        addColor(10);
        cout << indexValue;
        addColor(7);
    }
    else if (indexValue == 'O')
    {
        addColor(12);
        cout << indexValue;
        addColor(7);
    }
    else
    {
        cout << indexValue;
    }
}