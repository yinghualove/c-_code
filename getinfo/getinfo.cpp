#include <iostream>

int main()
{
    using namespace std;
    
    int params;

    cout << "input parameters what you want to input:" << endl;
    cin >> params;                                                      //c++ input
    cout << "The paramters = " << params << endl;

    cout << "Here are two more" << endl;

    params = params + 2;
    cout << "The paramters = " << params << endl;

    return 0;
}