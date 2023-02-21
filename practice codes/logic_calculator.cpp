#include <iostream>
#include <cstdio>
using namespace std;

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

int main()
{
    int a = 0;
    
    start :
{
    // NON GRAPHICAL USER INTERFACE USING COUT FUNCTION

    cout << "\n\n\t----------------------------------------" << endl;
    cout << "\t|                                      |" << endl;
    cout << "\t| L O G I C  G A T E  O P E R A T O R  |" << endl;
    cout << "\t|                                      |" << endl;
    cout << "\t----------------------------------------" << endl;

    cout << "\n\t|$$  M E N U  $$|\n\n";

    cout << "\t1) NOT GATE        [1]" << endl;
    cout << "\t2) AND GATE        [2]" << endl;
    cout << "\t3) OR GATE         [3]" << endl;
    cout << "\t4) NAND GATE       [4]" << endl;
    cout << "\t5) NOR GATE        [5]" << endl;
    cout << "\t6) EX - OR GATE    [6]" << endl;
    cout << "\t7) EX - NOR GATE   [7]" << endl;
    cout << "\t8) EXIT            [0]" << endl;

}
    cout << "\t--> "; cin >> a;      // <--- TAKING CHOICE FROM USER

    // USING SWITCH CASE AND GOTO STATEMENTS TO PASS PROGRAMM CONTROL TO USER ENTERED CHOICE

    switch (a)
    {
    case 1 :
        goto gnot;
        break;
    case 2 :
        goto gand;
        break;
    case 3 :
        goto gor;
        break;
    case 4 :
        goto gand;
        break;
    case 5 :
        goto gnor;
        break;
    case 6 :
        goto gexor; 
        break;
    case 7 :
        goto gexnor;
        break;
    case 0 :
        goto end;
        break;
    default:
        goto start;
        break;
    }

gnot :
    {
        int x;
        bool output;

        cout << "\n\tEnter the input value : ";
        cin >> x;
        output = inot(x);

        cout << "\n\tOutput for the given input values : " << output << endl;
        goto again;
    }
gand :
    {
        int x, y;
        bool output;

        cout << "\n\tEnter two input values : ";
        cin >> x;
        cout << "\t--> "; cin >> y;

        output = iand(x, y);
        cout << "\tOutput for the given input values : " << output << endl;
        goto again;
    }
gor :
    {
        int x, y;
        bool output;

        cout << "\n\tEnter two input values : ";
        cin >> x;
        cout << "\t--> "; cin >> y;

        output = ior(x, y);
        cout << "\tOutput for the given input values : " << output << endl;
        goto again;
    }
gnand :
    {
        int x, y;
        bool output;

        cout << "\n\tEnter two input values : ";
        cin >> x;
        cout << "\t--> "; cin >> y;

        output = inand(x, y);
        cout << "\tOutput for the given input values : " << output << endl;
        goto again;
    }
gnor :
    {
        int x, y;
        bool output;

        cout << "\n\tEnter two input values : ";
        cin >> x;
        cout << "\t--> "; cin >> y;

        output = inor(x, y);
        cout << "\tOutput for the given input values : " << output << endl;
        goto again;
    }
gexor :
    {
        int x, y;
        bool output;

        cout << "\n\tEnter two input values : ";
        cin >> x;
        cout << "\t--> "; cin >> y;

        output = iexor(x, y);
        cout << "\tOutput for the given input values : " << output << endl;
        goto again;

    }
gexnor :
    {
        int x, y;
        bool output;

        cout << "\n\tEnter two input values : ";
        cin >> x;
        cout << "\t--> "; cin >> y;

        output = iexnor(x, y);
        cout << "\tOutput for the given input values : " << output << endl;
        goto again;
    }
again :
    {
        int cc;
        cout << "\n\n\t-------------------------------------------\n";
        cout << "\tPress [ 0 ] to exit and [ 1 ] to continue : \n";
        cout << "\t-------------------------------------------\n";
        cout << "\t--> "; cin >> cc;

        switch (cc)
        {
            case 1 :
                goto start;
                break;
            case 2 :
                goto end;
                break;
            default:
                goto end;
                break;
        }
    }

    end :
    return 0;
}