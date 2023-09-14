#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number:" << endl;
    cin >> num;
    long long int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial of " << num << " is: " << fact;
    return 0;
}