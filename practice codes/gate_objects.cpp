// using objects and classes for logic gates.
#include <iostream>
using namespace std;

// create a class.
class gates
{
    public :
        int length;
        int width;

        int perimeter()
        {
            return (length + width) * 2;
        }
};
int main()
{
    gates g1;
    
    cout << "Enter the value of lenth : ";
    cin >> g1.length;
    cout << "Enter the value of width : ";
    cin >> g1.width;

    cout << "output value : " << g1.perimeter() << " Feet" << endl;
    return 0;
}