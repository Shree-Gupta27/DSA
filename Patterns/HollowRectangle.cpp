#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the number of rows " << endl;
    cin >> rows;
    cout << "Enter the number of columns " << endl;
    cin >> cols;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == 0 && j < cols || i == rows - 1 && j < cols || j == 0 && i < rows || j == cols - 1 && i < rows)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}