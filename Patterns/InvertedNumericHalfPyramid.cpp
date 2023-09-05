#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows " << endl;
    cin >> rows;

    int p;
    for (int i = 0; i < rows; i++)
    {
        p = 1;
        for (int j = rows; j > i; j--)
        {
            cout << p++;
        }
        cout << endl;
    }
    return 0;
}