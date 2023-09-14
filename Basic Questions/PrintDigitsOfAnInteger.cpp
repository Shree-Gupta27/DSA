#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an integer: " << endl;
    cin >> n;

    while (n)//While will work for a non-zero value of n. It means same as n>0
    {
        cout << (n % 10) << endl;
        n = n / 10;
    }
    return 0;
}