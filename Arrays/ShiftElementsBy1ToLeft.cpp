#include <iostream>
using namespace std;
//Left Shift
void shiftElementsBy1(int arr[], int size)
{
    int temp = arr[0];
    for (int i = 0; i <size; i++)
    {
        if (i == size-1)
        {
            arr[i] = temp;
        }
        else
        {
            arr[i] = arr[i + 1];
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