#include "Mult.h"
#include <iostream>

using namespace std;

Mult::Mult()
{
    float x;
    float y;
    float pro;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    pro = x * y;
    cout << "The product is " << pro << "." << endl;
}
