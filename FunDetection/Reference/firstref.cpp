//firstref.cpp -- defining and using a reference
#include <iostream>

int main()
{
    using namespace std;
    int rats = 101;
    int & rodents = rats;      //rodents is a references

    cout << "rats = " << rats << endl;
    cout << "rodents = " << rodents << endl;

    rodents++;
    cout << "rats = " << rats << endl;
    cout << "rodents = " << rodents << endl;

    //some implementations require type casting the following
    //addresses to type unsigned
    cout << "rats address = " << &rats << endl;
    cout << "rodents address = " << &rodents << endl;

    int bunnies = 50;
    rodents = bunnies;               //can we change the reference?
    cout << "bunnies = " << bunnies << endl;
    cout << "rats = " << rats << endl;
    cout << "rodents = " << rodents << endl;
  
    cout << "bunnies address = " << &bunnies << endl;
    cout << "rodents address = " << &rodents << endl;

    return 0;
}
