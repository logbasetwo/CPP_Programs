#include <iostream>

using namespace std;

int volume(int l = 3456789, int w = 1, int h = 2);



int main()
{
    cout << volume(2);
    return 0;
}

int volume(int l, int w, int h){
    return l*w*h;

}
