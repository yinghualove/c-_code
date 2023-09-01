//assert_ip.cpp -- 判断输入的ip是否合法

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    int n;             //输入的ip数
    char **ip_arr;
    string *ip_address;   
    
    cout << "输入ip数: ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cout << "输入ip地址: ";
        cin >> ip_arr[i];
    }
}