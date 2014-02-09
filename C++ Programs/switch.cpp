#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x;
    cout << "Enter a number between 1 and 10: ";
    cin >> x;

    switch(x){
    case 1:
        cout <<"You entered a lucky number.";
        break;
    case 2:
        cout <<"You entered a lucky number.";
        break;
    case 5:
        cout <<"You entered a lucky number.";
        break;
    case 10:
        cout <<"You entered a lucky number.";
        break;
    default:
        cout << "I don't like that number!";
        break;

    }


    return(0);
}
