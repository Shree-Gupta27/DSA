#include <iostream>
using namespace std;

void twoSum(int arr[], int size)
{
    int ans[3];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
            }
        }
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

    twoSum(arr, n);
    return 0;
}