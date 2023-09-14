#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows: " << endl;
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (i == j)
                cout << j + 1;
            else if (i == rows - 1)
                cout << j + 1;
            else if (j == 0)
                cout << "1";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}