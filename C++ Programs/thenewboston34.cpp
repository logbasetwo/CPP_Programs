#include <iostream>

using namespace std;

int main()
{
    int balogh[5] = {20, 54, 76, 832, 546};
    int sum = 0;

    for(int x = 0; x<=4; x++)
    {
        sum += balogh[x];
        cout << sum << endl;
    }
    return(0);
}
