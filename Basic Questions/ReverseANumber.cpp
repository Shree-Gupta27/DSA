#include <iostream>
using namespace std;

int reverse(int x)
{
    int rem;
    int rev = 0;
    bool isNeg = false;
    if (x <= INT_MIN)
    {
        return 0;
    }
    if (x < 0)
    {
        isNeg = true;
        x = -x;
    }

    while (x > 0)
    {
        if (rev > (INT_MAX / 10))
        {
            return 0;
        }
        rem = x % 10;
        rev = rev * 10 + rem;
        x /= 10;
    }
    return isNeg ? -rev : rev;
}
int main()
{
    int num;
    cout << "Enter the number to be reversed: ";
    cin >> num;
    if (reverse(num) != 0)
        cout << "The number reversed is " << reverse(num);
    else
        cout << "Number cannot be reversed!";
}