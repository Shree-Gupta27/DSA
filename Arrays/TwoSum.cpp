#include <iostream>
using namespace std;

void twoSum(int arr[], int size, int target)
{
    int ans[2];
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                ans[0] = i;
                ans[1] = j;
            }
        }
    }
    cout << ans[0] << " " << ans[1] << endl;
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
    int target;
    cout << "Enter target: " << endl;
    cin >> target;

    twoSum(arr, n, target);
    return 0;
}