#include <iostream>
#include "Add.h"
#include "Sub.h"
#include "Mult.h"
#include "Div.h"

using namespace std;

int cont(char input);

int main()
{
    char operatr;
    int x = -2;
    char y;

    while (x == -2){

    cout << "Enter operator (+, -, *, or /): ";
    cin >> operatr;


    if(operatr =='+'){
        Add ob;
        cout << "Would you like to continue? (Press \"c\" to continue and any key to escape.)";
        cin >> y;
        x = (cont(y));

    }
    if(operatr== '-'){
        Sub ob;
        cout << "Would you like to continue? (Press \"c\" to continue and any key to escape.)";
        cin >> y;
        x = (cont(y));



    }
    if(operatr=='*'){
        Mult ob;
        cout << "Would you like to continue? (Press \"c\" to continue and any key to escape.)";
        cin >> y;
        x = (cont(y));



    }
    if(operatr=='/'){
        Div ob;
        cout << "Would you like to continue? (Press \"c\" to continue and any key to escape.)";
        cin >> y;
        x = (cont(y));
    }

    }
    return (0);
}

int cont(char input){
int a;
    switch(input){
    case 'c':
        a = -2;
        break;

    case 'C':
        a = -2;
        break;

    default:
        a = 0;
        break;
    }

    return(a);
}



