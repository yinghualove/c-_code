#include <iostream>

using namespace std;

void simon(int);     //function prototype simon()

int main()
{
    simon(3);         //call the simon() function
    cout << "Pick an interger: ";
    int count;
    cin >> count;
    simon(count);    //call it again
    cout << "Done!" << endl;

    return 0;
}

void simon(int n)   //define the simon() function
{
    
    cout << "Simon says touch your toes " << n << " times." << endl;
    //void furctions don't need return statements
}