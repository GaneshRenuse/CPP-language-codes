#include <iostream>
using namespace std;

//C++ PROGRAMM TO GENERATE MULTIPLICATION TABLE

int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= 10; ++i)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}