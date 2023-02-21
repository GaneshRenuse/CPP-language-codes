#include <iostream>

// ALL THE WORKING OF LOGIC GATE FUNCTIONS IS HERE

int inot(int a)  // FUNCTION FOR NOT GATE
{
    return !a;
}

int iand(int a, int b)  // FUNCTION FOR AND GATE
{
    return a && b;
}

int ior(int a, int b)   // FUNCTION FOR OR GATE
{
    return a || b;
}

int inand(int a, int b) // FUNCTION FOR NAND GATE
{
    return !(a && b);
}

int inor(int a, int b)  // FUNCTION FOR NOR GATE
{
    return !(a || b);
}

int iexor(int a, int b) // FUNCTION FOR EX-OR GATE
{
    return !a && b || a && !b;
}

int iexnor(int a, int b)    // FUNCTION FOR EX-NOR GATE
{
    return !a && !b || a && b;
}