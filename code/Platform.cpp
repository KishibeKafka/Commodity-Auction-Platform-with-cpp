#include "Commodity.h"
#include "Order.h"
#include "User.h"
#include <iostream>

using namespace std;

const int max_user = 50;       // 最大用户数量
const int max_commodity = 50;  // 最大商品种类
const int max_order = 100;     // 历史订单最大容量

class Administrator
{
    string adminName;      // admin
    string adminPassword;  // 123456
public:
    Administrator() : adminName("admin"), adminPassword("123456") {}
};

class Platform
{
    Administrator admin;
    User users[max_user];
    Commodity commodities[max_commodity];
    Order orders[max_order];
};

int main()
{
    return 0;
}