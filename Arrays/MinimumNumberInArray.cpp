#include <iostream>
#include <limits.h>
using namespace std;

void minElement(int arr[], int size)
{
    int min = INT_MAX;
    int index;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            index = i;
        }
    }
    cout << "The minimum element present in the array is " << min << " at " << index << "th index";
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

    minElement(arr, n);
    return 0;
}