// program to print the value of i
// break with for loop

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        // break condition
        if (i == 3)
        {
            break;
        }
        cout << i << endl;
    }

    return 0;
}