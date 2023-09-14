#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter number of rows: " << endl;
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        int C = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << C << " ";
            C = C * (i - j) / j;
        }
        cout << endl;
    }

    return 0;
}