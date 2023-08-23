//swaps.cpp-- swapping with references and with pointers
#include <iostream>

void swapr(int & a,int & b);  //a,b are aliases for ints
void swapp(int *p,int *q);  //p,q are aliases for ints
void swapv(int a,int b);  //a,b are aliases for ints

int main()
{
    using namespace std;
    int wallet1 = 350;
    int wallet2 = 300;

    cout << "wallet1 = $" << wallet1;
    cout << "  wallet2 = $" << wallet2 << endl;

    cout << "Using references to swap contents:\n";
    swapr(wallet1,wallet2);
    cout << "wallet1 = $" << wallet1;
    cout << "  wallet2 = $" << wallet2 << endl;

    cout << "Using pointers to swap contents:\n";
    swapp(&wallet1,&wallet2);
    cout << "wallet1 = $" << wallet1;
    cout << "  wallet2 = $" << wallet2 << endl;
 
     cout << "Trying to use passing vy value:\n";
    swapv(wallet1,wallet2);
    cout << "wallet1 = $" << wallet1;
    cout << "  wallet2 = $" << wallet2 << endl;

}

void swapr(int & a,int & b)  //use references
{
    int temp;
    
    temp = a;
    a = b;
    b = temp;
}

void swapp(int *p,int *q)  //use pointers
{
    int temp;

    temp = *p;
    *p = *q;
    *q = temp;
}

void swapv(int a,int b)    //try use values
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}