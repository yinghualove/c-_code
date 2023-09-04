// huiwen.cpp -- 判断输入的字符串是否为回文
// 回文：顺读，逆读均相同

#include <iostream>
#include <string>
#include <cstring>

using namespace std;
#define MAX_LINE 1000

bool is_palindrome(string &str);

int main()
{
    int n;

    cout << "input palindrome number: ";
    cin >> n;
    cin.ignore();

    string context;

    cout << "input string: ";
    for (int i = 0; i < n; i++)
    {
        getline(cin, context);
        cout << context << endl;
        if (is_palindrome(context))
            cout << "YES!\n";
        else
            cout << "NO!\n";
    }

    return 0;
}

bool is_palindrome(string &str)
{
    int start = 0;
    int end = str.length() - 1;
    while (start < end)
    {
        if (str[start] != str[end])
            return false;
        start++;
        end--;
    }
    return true;
}