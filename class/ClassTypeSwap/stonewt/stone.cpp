//stone.cpp -- user-defined conversions
//compile with stonewt.cpp

#include <iostream>
#include "stonewt.h"

using namespace std;
void display(const Stonewt st, int n);

int main()
{
    Stonewt pavarotti = 260;           //uses constructor to initialize
    Stonewt wolfe(285.7);              //same as Stone wolfe = 285.7
    Stonewt taft(21,8);

    cout << "The tenor weigth ";
    pavarotti.show_stn();
    cout << "The detective weigth ";
    wolfe.show_stn();
    cout << "The president weigth ";
    taft.show_lbs();
    pavarotti = 265.8;                  //uses constructor for conversion
    taft = 325;                         //same as taft = Stonewt(325)
    cout << "After dinner, the tenor weigth ";
    pavarotti.show_lbs();
    cout << "After dinner, the President weigth ";
    taft.show_lbs();
    display(taft,2);
    cout << "The wrestler weigth even more.\n";
    display(422,2);
    cout << "No stone left unearned\n";
    return 0;
}

void display(const Stonewt st, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "Wow! ";
        st.show_stn();
    }
}