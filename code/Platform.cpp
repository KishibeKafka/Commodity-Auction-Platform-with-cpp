#include "Platform.h"
#include <cstdlib>

int main()
{
    Platform plt;
    plt.start();
    return 0;
}

void Platform::start()
{
    while (true)
    {
        cout << "Welcome to Commodity Auction Platform!" << endl;
        cout
            << "1. Admin Login    2. User Register    3. User Login     4. Quit"
            << endl;
        cout << endl;
        cout << "Please Enter number: ";
        char op;
        cin >> op;
        system("cls");
        switch (op)
        {
        case '1': adminLogin(); break;
        case '2': userRegister(); break;
        case '3': userLogin(); break;
        case '4':
            if (end())
                return;
            break;
        default:
            cout << "Invalid Input!" << endl;
            cout << "press any key...";
            cin >> op;
        }
        system("cls");
    }
}

bool Platform::adminLogin()
{
    string putname;
    string putpwd;
    cout << "Enter Admin Name: ";
    cin >> putname;
    cout << "Enter Password: ";
    cin >> putpwd;
    if (putname != admin.adminName || putpwd != admin.adminPassword)
    {
        cout << "Wrong name or password!" << endl;
        return 0;
    }
    // excute
    while (true)
    {
        cout
            << "1.view commodities 2.search commodities 3.unrelease commodities"
            << " 4.view orders 5.view users 6.ban user 7.logout" << endl;
        cout << "Please enter number: ";
        char op;
        cin >> op;
        system("cls");
        switch (op)
        {
        case '1': admin.viewCommoList(); break;
        case '2': admin.searchCommodity(); break;
        case '3': admin.unreleaseCommo(); break;
        case '4': admin.checkOrderHistory(); break;
        case '5': admin.viewUserList(); break;
        case '6': admin.banUser(); break;
        case '7': return 1;
        default:
            cout << "Invalid Input!" << endl;
            cout << "press any key...";
            cin >> op;
        }
        system("cls");
    }
    return 1;
}

bool Platform::userRegister()
{
    return 0;
}

bool Platform::userLogin()
{
    return 0;
}

bool Platform::end()
{
    cout << "press Y/y to confirm: ";
    char c;
    cin >> c;
    if (c != 'Y' || c != 'y')
        return false;
    else
        return true;
    ;
}