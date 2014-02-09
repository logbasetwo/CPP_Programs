#include "Add.h"
#include <iostream>

using namespace std;

Add::Add()
{
    float x;
    float y;
    float sum;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    sum = x + y;
    cout << "The sum is " << sum << "." << endl;
}
