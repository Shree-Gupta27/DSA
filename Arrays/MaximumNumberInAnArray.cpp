#include <iostream>
#include <limits.h>
using namespace std;

void maxElement(int arr[], int size)
{
    int max = INT_MIN;
    int index;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }
    cout << "The maximum element present in the array is " << max << " at " << index << "th index";
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

    maxElement(arr, n);
    return 0;
}