#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows: " << endl;
    cin >> rows;
int p;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <rows; j++)
        {
            if (i == 0 || j==0 ||(i+j)==rows-1)
                cout << " * ";
            else
                cout << "   ";
        }
        cout << endl;
    }
    return 0;
}
