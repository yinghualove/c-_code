// assert_ip.cpp -- 判断输入的ip是否合法

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

// 使用c格式的strtok分割字符串
void c_strtok(char ip_arr[][15], int n)
{
    char *ip_assert;
    int ip_arry[32];
    for (int i = 0; i < n; i++)
    {
        ip_assert = strtok(ip_arr[i], ".");
        int j = 0;
        int count = 0;
        int status = 1;
        while (ip_assert)
        {
            ip_arry[j] = stoi(ip_assert);
            if (ip_arry[j] < 0 || ip_arry[j] > 255)
                status = 0;
            count++;
            if (count == 4)
            {
                count = 1;
                if (status == 0)
                    cout << "NO!\n";
                else
                    cout << "YES!\n";
                status = 1;
            }
            ip_assert = strtok(NULL, ".");
            j++;
        }
    }
}

int main()
{
    int n; // 输入的ip数
    char ip_arr[10][15];
    string ip_address;
    char *ip_assert;
    int ip_arry[32];

    cout << "输入ip数: ";
    cin >> n;
    cin.ignore(); // cin >> n会留下一个换行符在输入流中，使用cin.ingore()忽略剩余的换行符

    int i;
    for (i = 0; i < n; i++)
    {
        cout << "第" << i+1 << "个输入ip地址: ";
        cin.getline(ip_arr[i], 15);
    }
    c_strtok(ip_arr,n);


    return 0;
}