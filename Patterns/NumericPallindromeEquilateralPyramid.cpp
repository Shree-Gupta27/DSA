#include <iostream>
using namespace std;

int main()
{
    int rows;
    int l = 0;
    cout << "Enter the number of rows: " << endl;
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i; j++)
        {
            cout << " ";
        }
        int flag = 0;
        for (int k = 0; k <= i; k++)
        {
            cout << k + 1;
            flag++;
        }
        int num;
        for (int l = 1; l < flag; l++)
        {
            if (l == 1)
            {
                num = flag;
                cout << --num;
            }
            else
            {
                cout << (--num);
            }
        }
        cout << endl;
    }

    return 0;
}