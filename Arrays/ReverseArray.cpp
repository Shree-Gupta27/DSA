#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int j = size - 1;
    for (int i = 0; i < size; i++)
    {
        if (i <= j)
        {
            swap(arr[size - 1 - i], arr[i]);
        }
        j--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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
    cout << "Printing original array:" << endl;
    printArray(arr, n);
    reverseArray(arr, n);
    cout << "Printing reverse array: " << endl;
    printArray(arr, n);
    return 0;
}