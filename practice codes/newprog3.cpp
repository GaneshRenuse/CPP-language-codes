#include <iostream>
using namespace std;

// pointer example prog 3

int main()
{
    int var, *varPoint;

    //! Wrong! 
    //! varPoint is an address but var is not
    //! varPoint = var;

    //! Wrong!
    //! &var is an address
    //! varPoint is the value stored in &var
    //! varPoint = &var;

    //* Correct! 
    //* varPoint is an address and so is &var
    //* varPoint = &var;

    //* Correct!
    //* both *varPoint and var are values
    //* *varPoint = var;

    return 0;
}