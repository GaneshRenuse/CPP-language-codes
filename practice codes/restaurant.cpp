#include <iostream>
using namespace std;

int main()
{
    int a, order;
    float no_deals;

    start :
    {
            system("cls");
        cout << "\n\t----------------------------" << endl;
        cout << "\t   VISHWAKARMA HOTEL MENU   " << endl;
        cout << "\t----------------------------" << endl;
        cout << "\n\t(1) chicken biryani      $2 " << endl;
        cout << "\t(2) chicken shwarma    $1.5 " << endl;
        cout << "\t(3) chinese rice       $2.5 " << endl;
        cout << "\t(4) chicken burger       $1 " << endl;
        cout << "\t(5) Nawabi pizza       $4.5 " << endl;
        cout << "\t(6) 250 ML coke       $1.75 " << endl;
        cout << "\n\t----------------------------" << endl;
        cout << endl;
    }

    cout << "\tPlease select the order number : ";
    cin >> order;
    cout << "\tPlease enter the number of deals : ";
    cin >> no_deals;
    cout << endl;

    switch (order)
    {
        case 1 :
                system("cls");
            cout << "\t-------------------------" << endl;
            cout << "\tOrder : chicken biryani." << endl;
            cout << "\tNumber of deals : " << no_deals << endl;
            cout << "\tPrice of each deal : $2." << endl;
            cout << "\tTotal price : $" << 2 * no_deals << endl;
            cout << "\t-------------------------" << endl;
            cout << endl;
            break;
        case 2 :
                system("cls"); 
            cout << "\t-------------------------" << endl;
            cout << "\tOrder : chicken shwarma." << endl;
            cout << "\tNumber of deals : " << no_deals << endl;
            cout << "\tPrice of each deal : $1.5." << endl;
            cout << "\tTotal price : $" << 1.5 * no_deals << endl;
            cout << "\t-------------------------" << endl;
            cout << endl;
            break;
        case 3: 
                system("cls");
            cout << "\t-------------------------" << endl;
            cout << "\tOrder : chinese rice." << endl;
            cout << "\tNumber of deals : " << no_deals << endl;
            cout << "\tPrice of each deal : $2.5" << endl;
            cout << "\tTotal price : $" << 2.5 * no_deals << endl;
            cout << "\t-------------------------" << endl;
            cout << endl;
            break;
        case 4 : 
                system("cls");
            cout << "\t-------------------------" << endl;
            cout << "\tOrder : chicken burger." << endl;
            cout << "\tNumber of deals : " << no_deals << endl;
            cout << "\tPrice of each deal : $1." << endl;
            cout << "\tTotal price : $" << 1 * no_deals << endl;
            cout << "\t-------------------------" << endl;
            cout << endl;
            break;
        case 5 : 
                system("cls");
            cout << "\t-------------------------" << endl;
            cout << "\tOrder : nawabi pizza." << endl;
            cout << "\tNumber of deals : " << no_deals << endl;
            cout << "\tPrice of each deal : $4.5." << endl;
            cout << "\tTotal price : $" << 4.5 * no_deals << endl;
            cout << "\t-------------------------" << endl;
            cout << endl;
            break;
        case 6 : 
                system("cls");
            cout << "\t-------------------------" << endl;
            cout << "\tOrder : 250 ML coke." << endl;
            cout << "\tNumber of deals : " << no_deals << endl;
            cout << "\tPrice of each deal : $1.75" << endl;
            cout << "\tTotal price : $" << 1.75 * no_deals << endl;
            cout << "\t-------------------------" << endl;
            cout << endl;
            break;
        default:
                system("cls");
            cout << "\tYou entered wrong choice" << endl;
            cout << endl;
            goto start;
            break;
    }
        
        again : 
        {
            cout << "\t-------------------------------------" << endl;
            cout << "\tPress ( 0 ) to exit and ( 1 ) to menu" << endl;
            cout << "\t-------------------------------------" << endl;
            cout << "\t==>"; cin >> a;

            switch (a)
            {
                case 1 :
                    goto start;
                    break;
                default:
                    goto exit;
                    break;
            }
        }

    exit : 
    return 0;
}