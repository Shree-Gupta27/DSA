#include <iostream>
using namespace std;

void printPairs(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "(" << arr[i] << "," << arr[j] << ")" << " ,";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element: " << endl;
        cin >> arr[i];
    }

    printPairs(arr, n);
    return 0;
}