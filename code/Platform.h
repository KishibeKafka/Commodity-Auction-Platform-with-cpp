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
    void viewCommoList();      // 查看商品列表
    void searchCommodity();    // 搜索商品
    bool unreleaseCommo();     // 下架商品
    void checkOrderHistory();  // 查看历史订单
    void viewUserList();       // 查看用户
    bool banUser();            // 封禁用户
};

class Platform
{
    Administrator admin;
    User users[max_user];
    Commodity commodities[max_commodity];
    Order orders[max_order];
public:
    Platform();
    ~Platform();
    void start();
    bool adminLogin();
    bool userRegister();
    bool userLogin();
    void end();
};