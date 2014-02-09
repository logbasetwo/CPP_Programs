#include <iostream>

using namespace std;


class MyFirstClass{
    public:
        void coolSaying(){
            cout << "Hello out there!" << endl;
        }
};

int main()
{
    MyFirstClass myObject;
    myObject.coolSaying();
    return 0;
}
