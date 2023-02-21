#include <iostream>
using namespace std;

// c++ program to swap two numbers using third numbers

int main()
{
    int a, b , temp;

    cout << "\nEnter 1st number : ";
    cin >> a; 
    cout << "Enter 2nd number : ";
    cin >> b;

    // printing the output before swapping
    cout << "\nbefore swapping : "<< endl;
    cout << "a = "<< a << ", b = "<< b << endl;

    // swaping the numbers
    temp = a;
    a = b;
    b = temp;

    // printing the output after swapping
    cout << "\nafter swapping : "<< endl;
    cout << "a = "<< a << ", b = "<< b << endl;

    //c++ program to swap two numbers without using third variable 
    
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\nagain swap : " << endl;
    cout << "a = " << a << ", b = "<< b << endl;

    return 0;
}