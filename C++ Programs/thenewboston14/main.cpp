#include <iostream>
#include <string>

using namespace std;

class BaloghsClass{
    public:
        BaloghsClass(string z){
            setName(z);
        }
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

    BaloghsClass object("Print this on the screen \n");
    cout << object.getName();
    BaloghsClass object2("Don't forget me!");
    cout << object2.getName();

    return(0);



}

