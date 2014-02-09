#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x = 1;

    //While Loop:
    while(x <= 20){
        cout << "Hello World" << endl;
        x++;
    }

    //For Loop:
    for(int x = 1; x <=20; x++){
        cout <<"Hello World" << endl;
    }

    //Do, while loop:
    do{
        cout<< "Hello World" << endl;
        x++;
    }
    while(x<=20);


    return(0);
}
