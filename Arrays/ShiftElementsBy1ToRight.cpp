#include <iostream>
using namespace std;
//Right Shift
void shiftElementsBy1(int arr[], int size)
{
    int temp = arr[size - 1];
    for (int i = size - 1; i >= 0; i--)
    {
        if (i == 0)
        {
            arr[i] = temp;
        }
        else
        {
            arr[i] = arr[i - 1];
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
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

    shiftElementsBy1(arr, n);
    return 0;
}