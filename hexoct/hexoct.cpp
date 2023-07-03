//idsplay value in hex and octal

#include <iostream>

using namespace std;

int main()
{
    int chest = 42;        //decimal integer literal
    int waist = 0x42;      //hexadecimal integer literal
    int inseam = 042;      //octal integer literal

    cout << "Monsieur cuts a striking figure!" << endl;
    
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex;
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct;
    cout << "inseam = " << inseam << " (octal for 42)" << endl;

    return 0;
}