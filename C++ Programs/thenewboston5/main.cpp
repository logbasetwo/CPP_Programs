#include <iostream>

using namespace std;

int main()
{
    float x;
    float y;
    float sum;
    cout << "Please enter a number: ";
    cin >> x;
    cout << "Please enter another number: ";
    cin >> y;
    sum = x + y;
    //cout << "The sum is ";
    cout << "The sum is: " << sum << endl;
    if(x==y)
    {
        cout << "The numbers are the same!";
    }
    else if(x>y)
    {
        cout << "The first number is greater than the second number.";
    }
    else if(x<y)
    {
        cout << "The second number is greater than the first number. ";
    }
    else
    {
        cout << "Are those numbers?";
    }
    return(0);
}
