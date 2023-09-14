#include <iostream>
using namespace std;
// Only for Odd rows
int main()
{
    int rows;
    cout << "Enter number of rows: " << endl;
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        int cond = i <= rows / 2 ? 2 * i : 2 * (rows - i - 1);
        for (int j = 0; j <= cond; j++)
        {
            if (j <= cond / 2)
            {
                cout << j + 1;
            }
            else
            {
                cout << cond - j + 1;
            }
        }
        cout << endl;
    }
    return 0;
}