#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cout << "Enter number:" << endl;
    cin >> num;
    int flag = -1;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            cout << "Not a prime" << endl;
            flag = 0;
            break;
        }
    }
    if (flag == -1)
        cout << "Prime number" << endl;
    return 0;
}