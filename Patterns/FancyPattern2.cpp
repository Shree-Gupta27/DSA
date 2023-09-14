#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows: " << endl;
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j % 2 == 0)
                cout << i + 1;
            else
                cout << "*";
        }
        cout << endl;
    }

for (int i = rows-2; i >=0; i--)
    {
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j % 2 == 0)
                cout << i + 1;
            else
                cout << "*";
        }
        cout << endl;
    }

    return 0;
}