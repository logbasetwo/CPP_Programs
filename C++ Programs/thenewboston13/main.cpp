#include <iostream>
#include <string>

using namespace std;

class PrintClass{
public:
    void setName(string x){
        name = x;
    }
    string getName(){
        return name;
    }
private:
    string name;
};

int main()
{
    PrintClass testObject;
    testObject.setName("Hello World");
    cout << testObject.getName();
    return(0);
}


