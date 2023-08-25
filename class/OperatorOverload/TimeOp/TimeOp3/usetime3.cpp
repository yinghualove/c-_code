//usetime3.cpp -- using the fourth draft of Time class
//compile usetime3.cpp and time3.cpp together
#include <iostream>
#include "time3.h"

int main()
{
    using std::cout;
    using std::endl;
    Time aida(3,35);
    Time tosca(2,48);
    Time temp;

    cout << "Aida and Tosca:\n";
    cout << aida << "; " << tosca << endl;
    temp = aida + tosca;              //use operator+()
    cout << "Aida + Tosca = " << temp << endl;
    temp = aida * 1.17;               //member operator*()
    cout << "Aida * 1.17 = " << temp << endl;
    cout << "10 * Tosca: " << 10 * tosca << endl;

    return 0;
}