#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter number of rows: " << endl;
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows + 2 - i; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            if (k % 2 == 0)
                cout << i + 1;
            else
                cout << "*";
        }
        for (int j = 0; j <= rows + 2 - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}