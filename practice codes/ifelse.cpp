#include <iostream>
using namespace std;

// C++ PROGRAMM FOR ODD AND EVEN

int main()
{
    int a;

    cout << "Enter a number : ";
    cin >> a;

    if (a % 2 == 0)
    {
        cout << "\nentered number is even ";
    }
    else
    {
        cout << "\nentered number is odd ";
    }

    return 0;
}