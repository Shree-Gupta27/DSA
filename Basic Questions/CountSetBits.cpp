#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int count = 0;
    while (num)
    {
        if (num & 1)
            count++;
        num >>= 1;
    }
    cout << "The number of set bits are " << count;
    return 0;
}