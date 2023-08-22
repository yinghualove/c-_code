#include <iostream>
#include "stock2.h"

const int STKS = 4;  //create an array of STKS Stock objects
int main()
{
    using std::cout;
    using std::ios_base; 
    cout.setf(ios_base::fixed,ios_base::floatfield);             //use fixed and floatfield decimal point format
    cout.precision(2);                      //two places to right of decimal
    cout.setf(ios_base::showpoint);         //show trailing zeros

    //create an array of initialized objects
    Stock stocks[STKS] = {
        Stock("NanoSmart",12,20.0),
        Stock("Boffo Object",200,2.0),
        Stock("Monolithic Obelisks",130,3.25),
        Stock("Fleep Enterprises",60,6.5)
    };

    cout << "Stock holdings:\n";
    int st;
    for(st = 1; st< STKS; st++)
        stocks[st].show();
    
    Stock top = stocks[0];
    for(st = 1; st < STKS; st++)
        top = top.topval(stocks[st]);
    cout << "nMost valuable holding:\n";
    top.show();

    return 0;
}