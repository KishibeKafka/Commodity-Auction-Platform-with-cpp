#include <iomanip>
#include <regex>
#include <string>

using namespace std;

const regex reg_username("[A-Za-z]{1,10}");
const regex reg_password("[a-z0-9]{1,20}");
const regex reg_phonenumber("[0-9]{1,20}");
const regex reg_address("[A-Za-z]{1,40}");

class User
{
    char userID[4];      // form: U001
    string username;     // [A-Za-z]{1,10};
    string password;     // [a-z0-9]{1,20};
    string phonenumber;  // [0-9]{1,20};
    string address;      // [A-Za-z]{1,40};
    double balance;      // 余额保留一位小数
    bool userState;      // 1表示active
};