#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    switch(x) {
    case 1:
            cout << "X is 1";
            break;
    case 2:
            cout << "X is 2";
            break;
    case 3:
            cout << "X is 3";
            break;
    default:
            cout << "X is not 1, 2, or 3.";
            break;
    }
    return(0);
}
