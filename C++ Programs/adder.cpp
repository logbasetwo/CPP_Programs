#include <iostream>

using namespace std;

int main(){

int x = 1;
int number;
int total = 0;
int many;

cout << "How many numbers would you like to add? ";
cin >> many;
cout <<"\n";
cout << "Enter you numbers below: " << endl;

while(x <= many){
    cin >> number;
    total = total + number;
    x++;
}
cout << "The sum is: "<< total <<endl;

    return(0);
}
