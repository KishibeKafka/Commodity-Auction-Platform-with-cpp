#include <iomanip>
#include <regex>
#include <string>

using namespace std;

const regex reg_commodityName("[A-Za-z]{1,20}");
const regex reg_description("[A-Za-z]{1,200}");

class Commodity
{
    char commodityID[4];   // format:M001
    string commodityName;  // [A-Za-z]{1,20};
    double price;          // 精确到小数点后一位
    int number;            // 数量
    string description;    // 描述信息 [A-Za-z]{1,200};
    char sellerID[4];      // format:U001
    string addedDate;      // yyyy-mm-dd
    bool state;            // 1表示onAuction 0表示removed
};