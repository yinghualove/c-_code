//instr1.cpp -- reading more than one string
#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

//使用cin读取字符串书输入，cin使用空白（空格、制表符和换行符）来定字符串的界
    // cout << "Enter Your name: \n";
    // cin >> name;
    // cout << "Enter Your favorite dessert: \n";
    // cin >> dessert;
    // cout << "I have some delicious " << dessert;
    // cout << "for your, " << name << ".\n";

//使用cin.getline()每次读取一行字符串输入
    cout << "Enter Your name: \n";
    cin.getline(name,ArSize);
    cout << "Enter Your favorite dessert: \n";
    cin.getline(dessert,ArSize);
    cout << "I have some delicious " << dessert;
    cout << " for your, " << name << ".\n";

//使用cin.get()每次读取一行字符串输入
    cout << "Enter Your name: \n";
    cin.get(name,ArSize).get();
    cout << "Enter Your favorite dessert: \n";
    cin.get(dessert,ArSize).get();
    cout << "I have some delicious " << dessert;
    cout << " for your, " << name << ".\n";
    return 0;
}