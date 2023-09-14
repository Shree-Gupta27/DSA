#include <iostream>
using namespace std;
void printCount(int arr[], int size)
{
    int ones = 0, zeros = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
            ones++;
        if (arr[i] == 0)
            zeros++;
    }
    cout << "The number of zeros are: " << zeros << endl;
    cout << "The number of ones are: " << ones << endl;
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter only 0 or 1: " << endl;
        cin >> arr[i];
    }

    printCount(arr, n);
    return 0;
}