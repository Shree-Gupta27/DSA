#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows: " << endl;
    cin >> rows;

    for (int i = rows; i >= 0; i--)
    {
        for (int j = 0; j < 2 * rows - 1; j++)
        {
            if (i == rows - 1 || (i + j) == rows - 1 || (j - i) == rows - 1)
                cout << " * ";
            else
                cout << "   ";
        }
        cout << endl;
    }
    return 0;
}