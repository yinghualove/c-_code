#include <iostream>

#define tets_str "1.2.3.4.5"

using namespace std;

void test(const char *str)
{
    cout << " str = " << str << endl; 
}

void test(char *str)
{
    cout << "enter test(char *str)\n";
    cout << " str = " << str << endl; 
}

int main()
{
    test(tets_str);

    return 0;
}