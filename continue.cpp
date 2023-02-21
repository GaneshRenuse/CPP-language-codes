// program to print the value of i

#include <iostream>
using namespace std;

int main()
{
    // continue with for loop
    for (int i = 1; i <= 5; i++)
    {
        // condition to continue
        if (i == 3)
        {
            continue;
        }

        cout << i << endl;
    }

    // continue with while loop
    int sum = 0;
    int number = 0;

    while (number >= 0)
    {
        // add all positive numbers
        sum += number;

        // take input from the user
        cout << "Enter a number: ";
        cin >> number;

        // continue condition
        if (number > 50)
        {
            cout << "The number is greater than 50 and won't be calculated." << endl;
            number = 0; // the value of number is made 0 again
            continue;
        }
    }

    // display the sum
    cout << "The sum is " << sum << endl;

    // continue with nested loop

    int number;
    int sum = 0;

    // nested for loops

    // first loop
    for (int i = 1; i <= 3; i++)
    {
        // second loop
        for (int j = 1; j <= 3; j++)
        {
            if (j == 2)
            {
                continue;
            }
            cout << "i = " << i << ", j = " << j << endl;
        }
    }
    return 0;
}