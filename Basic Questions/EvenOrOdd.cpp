#include <iostream>
using namespace std;
bool EvenOdd(int num)
{
    if (num&1)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cout << "Enter an integer: " << endl;
    cin >> n;
    if (EvenOdd(n) == 0)
        cout << "Even number" << endl;
    else
        cout << "Odd number" << endl;
    return 0;
}