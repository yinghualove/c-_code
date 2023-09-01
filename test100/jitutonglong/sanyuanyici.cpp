// 输入鸡数，大鸡￥5，中鸡￥3，小鸡￥1/3
#include <iostream>

int main()
{
    using namespace std;

    int total;
    double price;
    double cal_price;
    int i, j, k;

    cout << "输入鸡总数： ";
    cin >> total;
    cout << "输入总价格： ";
    cin >> price;

    for (i = 0; i < total + 1; i++)  //大鸡
    {
        for (j = 0; j < total + 1; j++)   //中鸡
        {
            for (k = 0; k < total + 1; k++)  //小鸡
            {
                cal_price = 5 * i + 3 * j + 0.333 * k;
                if (i + j + k == total && (cal_price < price))
                {
                    cout << "cal_price = " << cal_price << endl;
                    cout << "大鸡： " << i
                         << " 中鸡: " << j
                         << " 小鸡: " << k << endl;
                }
            }
        }
    }
}