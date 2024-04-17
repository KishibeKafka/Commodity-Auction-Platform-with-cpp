#include <iomanip>
#include <string>

using namespace std;

class Order
{
    string orderID;      // T001
    string commodityID;  // M001
    double unitPrice;    // 单价，精确到小数点后一位
    int number;          // 成交量
    string date;         // yyyy-mm-dd
    string sellerID;     // U001
    string buyerID;      // U001
public:
    Order();
    ~Order();
};