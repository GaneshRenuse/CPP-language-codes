// c++ programm for type casting.

#include <iostream>
using namespace std;

int main()
{
    // initializing a double variable
    double num_double = 3.56;
    cout << "num_double = " << num_double << endl;

    // C-style conversion from double to int
    int num_int1 = (int)num_double;
    cout << "num_int1   = " << num_int1 << endl;

    // function-style conversion from double to int
    int num_int2 = int(num_double);
    cout << "num_int2   = " << num_int2 << endl;

    return 0;
}
/*
    //Working of Implicit type-conversion

        #include <iostream>
        using namespace std;

        int main() 
        {

        int num_int;
        double num_double = 9.99;

        // implicit conversion
        // assigning a double value to an int variable
        num_int = num_double;

        cout << "num_int = " << num_int << endl;
        cout << "num_double = " << num_double << endl;

        return 0;
    }
*/