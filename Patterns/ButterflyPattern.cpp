#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter number of rows: " << endl;
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 2 * rows; j++)
        {
            if (j <= i || (i + j) >= ((2 * rows) - 1))
                cout << " * ";
            else
                cout << "   ";
        }
        cout << endl;
    }

    for (int i = rows - 1; i >= 0; i--)
    {
        for (int j = 0; j < 2 * rows; j++)
        {
            if (j <= i || (i + j) >= ((2 * rows) - 1))
                cout << " * ";
            else
                cout << "   ";
        }
        cout << endl;
    }
    return 0;
}