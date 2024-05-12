#include <iostream>
using namespace std;
int main()
{
    /* Note need debug*/
    int amount = 100;
    amount += amount * 2;
    cout << amount << endl;
    /* Note need debug*/
    int x= 5;
    int y= -2;
    int z = 2;
    cout << (x + y * z <= x + z * z - x) << endl;
    return 0;
}