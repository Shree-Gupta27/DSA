#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j < n || i == n - 1 && j < n || j == 0 && i < n || j == n - 1 && i < n)
                cout << " * ";
            else
                cout << "   ";
        }
        cout << endl;
    }
    return 0;
}