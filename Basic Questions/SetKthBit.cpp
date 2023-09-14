#include <iostream>
using namespace std;

int main()
{
    int N, K;
    cout << "Enter the number: ";
    cin >> N;
    cout << "Enter the bit to be set: ";
    cin >> K;

    int mask = 1 << K;
    int ans=N|mask;
    cout << "The new number is: " << ans;
    return 0;
}