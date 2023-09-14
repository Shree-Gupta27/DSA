#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows: " << endl;
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 2 * rows - 1; j++)
        {
            if ((i + j) == rows - 1 || (j - i) == rows - 1)
                cout << " * ";
            else
                cout << "   ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int k = 0; k < 2 * rows - 1; k++)
        {
            if (i == k || (i + k) == (2 * rows - 2))
                cout << " * ";
            else
                cout << "   ";
        }
        cout << endl;
    }

    return 0;
}