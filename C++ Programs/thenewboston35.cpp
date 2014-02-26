#include <iostream>

using namespace std;

void printArray(int theArray[], int sizeOfArray);

int main()
{
    int firstArray[3] = {20, 54, 675};
    int anotherArray[6] = {54, 24, 7, 8, 9, 99};
    printArray(firstArray, 5);
    return(0);
}


void printArray(int theArray[], int sizeOfArray){

    for(int x = 0; x < sizeOfArray; x++){
        cout << theArray[x] << endl;
    }

}
