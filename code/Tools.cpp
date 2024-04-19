#include "Tools.h"

string get_time()
{
    time_t t = time(0);
    char str[11];
    strftime(str, sizeof(str), "%Y-%m-%d", localtime(&t));
    string s = str;
    return s;
}