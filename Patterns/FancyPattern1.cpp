#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter number of rows: " << endl;
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << " ";
        }
        for (int l = 0; l < rows - i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = rows-1; i >= 0; i--)
    {
        for (int j = 0; j < rows - i; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << " ";
        }
        for (int l = 0; l < rows - i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // int row = rows + 1;
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < 2 * row - 1; j++)
    //     {
    //         if (((i + j) >= row - 1 && (j - i) <= row - 1))
    //             cout << " ";
    //         else
    //             cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < row; i++)
    // {
    //     for (int k = 0; k < 2 * row - 1; k++)
    //     {
    //         if (i <= k && (i + k) <= (2 * row - 2))
    //             cout << " ";
    //         else
    //             cout << "*";
    //     }

    //     cout << endl;
    // }

    return 0;
}