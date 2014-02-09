#include <iostream>

using namespace std;

int main()
{
    float x = 3.14159265;
    if(x==12)
    {
         cout << "x is equal to 12 \n";
    }
    else if(x>12)
    {
        cout << "x is greater than 12 \n";
    }
    else if(x<12)
    {
        cout << "x is less than 12 \n";
    }
    else
    {
        cout << "x is not equal to 12 \n";
    }
    cout << x;
    return 0;
}
