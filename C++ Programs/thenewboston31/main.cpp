#include <iostream>

using namespace std;

//Finds a factorial value by user input
//uses a recurrsion in a correct manner

int factorialFinder(int x){
    if(x==1){
            return 1;
    }
    else{
        return x*factorialFinder(x-1);
    }
}





int main()
{
    int a = 0;
    cout << "Type a number to find its factorial. (x!): ";
    cin >> a;
    cout << factorialFinder(a) << endl;
    return 0;
}
