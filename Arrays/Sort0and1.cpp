#include <iostream>
using namespace std;

void sort0and1(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        if (arr[i] == 1 && arr[j] == 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        else if (arr[i] == 0)
        {
            i++;
        }
        else
            j--;
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
        cout << "Enter only zero or one: " << endl;
        cin >> arr[i];
    }

    sort0and1(arr, n);
    return 0;
}