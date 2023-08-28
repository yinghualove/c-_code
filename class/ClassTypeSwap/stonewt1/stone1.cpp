//stone.cpp -- user-defined conversions
//compile with stonewt1.cpp

#include <iostream>
#include "stonewt1.h"

using namespace std;
void display(const Stonewt st, int n);

int main()
{
    Stonewt poppins(9,2.8);
    double p_wt = poppins;
    cout << "Convert to double => ";
    cout << "Poppins:: " << p_wt << " pounds.\n";
    cout << "Convert to int => " << int(poppins) << " pounds.\n"; 
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