#include <iomanip>
#include <string>

using namespace std;

class Order
{
    char orderID[4];      // T001
    char commodityID[4];  // M001
    double unitPrice;     // 单价，精确到小数点后一位
    int number;           // 成交量
    string date;          // yyyy-mm-dd
    char sellerID[4];     // U001
    char buyerID[4];      // U001
};