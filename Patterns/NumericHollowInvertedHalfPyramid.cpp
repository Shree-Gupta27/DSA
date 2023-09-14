#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows: " << endl;
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i; j++)
        {
            if ((i + j) == rows - 1)
                cout << rows;
            else if (i == 0)
                cout << j + 1;
            else if (j == 0)
                cout << i + 1;
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}