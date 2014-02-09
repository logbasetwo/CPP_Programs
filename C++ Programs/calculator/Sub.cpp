#include "Sub.h"
#include <iostream>

using namespace std;

Sub::Sub()
{
    float x;
    float y;
    float dif;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    dif = x - y;
    cout << "The difference is " << dif << "." << endl;
}

