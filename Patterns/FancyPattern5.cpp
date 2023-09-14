#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows: " << endl;
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        char ch = 65;
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j > i)
            {
                cout << (char)(ch - 2);
                ch--;
            }
            else
                cout << ch++;
        }
        cout << endl;
    }
    return 0;
}