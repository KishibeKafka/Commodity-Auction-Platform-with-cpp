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
    string userID;       // form: U001
    string username;     // [A-Za-z]{1,10};
    string password;     // [a-z0-9]{1,20};
    string phonenumber;  // [0-9]{1,20};
    string address;      // [A-Za-z]{1,40};
    double balance;      // 余额保留一位小数
    bool userState;      // 1表示active
public:
    User();
    ~User();
    // 个人信息
    void checkInformation();   // 查看个人信息
    bool updateInformation();  // 修改个人信息
    bool charge();             // 充值
    // 卖家
    bool releaseCommodity();         // 发布商品
    void checkReleasedCommo();       // 查看发布商品
    bool updateCommoInformation();   // 修改商品信息
    bool unreleaseCommo();           // 下架商品
    void checkSellerOrderHistory();  // 查看历史订单
    // 买家
    void viewCommoList();           // 查看商品列表
    bool buyCommodity();            // 购买商品
    void searchCommodity();         // 搜索商品
    void checkBuyerOrderHistory();  // 查看历史订单
};