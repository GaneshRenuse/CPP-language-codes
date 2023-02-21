#include <iostream>
using namespace std;

//creating a class
class funcd
{
public :
    int a;
    int b;

    int addition()
    {
        return a + b;
    }

    int multiplication()
    {
        return a * b;
    }
};

int main()
{
    // creating object of funcd class
    funcd f1;

    // assigning values to data members
    cout << "enter 1st number : ";
    cin >> f1.a;
    cout << "enter 2nd number : ";
    cin >> f1.b;

    cout << "addition of two numbers : " << f1.addition() << endl;
    cout << "multiplication of two numbers : " << f1.multiplication() << endl;
    
    return 0;
}