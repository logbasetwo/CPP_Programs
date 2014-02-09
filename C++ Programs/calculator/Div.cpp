#include "Div.h"
#include <iostream>

using namespace std;

Div::Div()
{
    float x;
    float y;
    float quo;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    quo = x / y;
    cout << "The quotient is " << quo << "." << endl;
}
