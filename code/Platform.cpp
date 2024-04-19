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
    return 1;
}

bool Platform::userRegister() {}

bool Platform::userLogin() {}

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