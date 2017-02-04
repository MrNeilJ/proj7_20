// This program creates a simple animation using Windows
// functions to simulate a yoyo moving down and up

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = (40, 3);        // Start position
    SetConsoleCursorPosition(screen, pos);
    cout << "0" << endl;
    Sleep(500);

    // Watch the yoy go down & back up 3 times
    for (int tossIt = 1; tossIt <= 3; tossIt++)
    {

    }
}