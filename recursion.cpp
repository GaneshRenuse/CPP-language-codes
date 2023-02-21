// Factorial of n = 1*2*3*...*n

#include <iostream>
using namespace std;

// program to find factorial of n using recursion : 
int factorial(int);

int main()
{
    int n, result;

    cout << "Enter a non-negative number: ";
    cin >> n;

    result = factorial(n);
    cout << "Factorial of " << n << " = " << result;
    return 0;
}

int factorial(int n)
{
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}