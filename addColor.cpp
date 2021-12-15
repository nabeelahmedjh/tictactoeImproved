#include "helper.h"
#include <windows.h>
void addColor(int key)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), key);
}

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