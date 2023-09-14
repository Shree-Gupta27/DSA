#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter number of rows: " << endl;
    cin >> rows;
    int p = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << p++ << " ";
        }
        cout << endl;
    }
    return 0;
}