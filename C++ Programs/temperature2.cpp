#include <iostream>

using namespace std;

//Program that converts celsius to fahrenheit or the other direction. Then it prints that number in kelvin.

int fahrenheit(int f);
int celsius(int c);
int kelvin(int x);
int kelvinf(int y);

int main()
{
    char type;
    int temp;

    cout << "Do you have a celsius or fahrenheit number? (Press c for celsius and f for fahrenheit.): ";
    cin >> type;

    switch(type){
    case 'c':
        cout << "Enter temperature value: ";
        cin >> temp;
        cout << "In Fahrenheit: ";
        cout << celsius(temp) << endl;
        cout << "In Kelvin: ";
        cout << kelvin(temp);
        break;

    case 'f':
        cout <<"Enter temperature value: ";
        cin >> (temp);
        cout <<"In Celsius: ";
        cout <<fahrenheit(temp) << endl;
        cout <<"In Kelvin: ";
        cout << kelvinf(temp);
        break;

    default:
        cout <<"That was not one of the options. \n";
        break;
    }

    return(0);

}

int fahrenheit(int f)
{
    return (f - 32)*5/9;
}

int celsius(int c)
{
    return c * 9 / 5 + 32;

}
int kelvin(int x)
{
    return x + 274;
}

int kelvinf(int y)
{
    return (y - 32)*5/9 + 274;

}
