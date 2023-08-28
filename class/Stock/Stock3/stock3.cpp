//#include <iostream>
//#include <cstring> 
#include "stock3.h"
// inline void Stock::set_tot()        //use inline in definition
// {
//     total_val = shares * share_val;
// }

//constructors(verbose versions)
Stock::Stock()             //default constructor
{
    std::cout << "Default constructor called\n";
    company = "No name";
    shares = 0;
    share_val = 0;
    total_val = 0;
}

//constructor definition
Stock::Stock(const char *co, int n, double pr)
{
    company = co;  // assign C-style string to string object
    if(n < 0)
    {
        std::cerr << "Number of shares can't be negative."
        << company << " shares set to 0.\n";
        shares = 0;
    }
    else 
        shares = n;
    share_val = pr;
    set_tot();
}


//constructor definition
Stock::Stock(const std::string & co,int n,double pr)
{
    std::cout << "use std:string way to init stock\n";
    company = co;  // assign C-style string to string object
    if(n < 0)
    {
        std::cerr << "Number of shares can't be negative."
        << company << " shares set to 0.\n";
        shares = 0;
    }
    else 
        shares = n;
    share_val = pr;
    set_tot();
}

//class destructor
Stock::~Stock()           //verbose class dectructor
{
    std::cout << "Bye, " << company << "!\n";
} 

void Stock::acquire(const char *co, int n, double pr)
{
    company = co;  // assign C-style string to string object
    if(n < 0)
    {
        std::cerr << "Number of shares can't be negative."
        << company << " shares set to 0.\n";
        shares = 0;
    }
    else 
        shares = n;
    share_val = pr;
    set_tot();
}

void Stock::buy(int num, double price)
{
    if(num < 0)
    {
        std::cerr << "Number of shares purchased can't be negative."
        << "Transaction is aborted.\n";
    }
    else 
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(int num, double price)
{
    using std::cerr;
    if(num < 0)
    {
        cerr << "Number of shares purchased can't be negative."
        << "Transaction is aborted.\n";
    }
    else if(num > shares)
    {
        cerr << "Your can't sell more than you have!"
        << "Transaction is aborted.\n";
    }
    else 
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show()const
{
    using std::cout;
    using std::endl;
    cout << "Company: " << company
    << "  Shares: " << shares << endl
    << "  Share Price: $" << share_val
    << "  Total Worth: $" << total_val << endl;
}

const Stock & Stock::topval(const Stock & s) const
{
    if(s.total_val > total_val)
        return s;
    else 
        return *this;
}