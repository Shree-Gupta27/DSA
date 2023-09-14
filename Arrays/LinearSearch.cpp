#include <iostream>
using namespace std;
void linearSearch(int arr[], int size, int target)
{
    bool flag = 0;
    int index;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            flag = 1;
            index = i;
            break;
        }
    }
    if (flag == 0)
        cout << "The target was not found";
    else
        cout << "The target was found at " << index << "th index";
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
    cout << "Enter target element to be searched: ";
    cin >> target;

    linearSearch(arr, n, target);
    return 0;
}