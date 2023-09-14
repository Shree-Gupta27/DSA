#include <iostream>
using namespace std;
int main()
{
    int digits;
    cout << "How many digits you wnat to enter? ";
    cin >> digits;

    int num;
    int ans = 0;
    for (int i = 1; i <= digits; i++)
    {
        cout << "Enter digit: " << endl;
        cin >> num;
        ans = ans * 10 + num;
        cout << "Number created so far: " << ans << endl;
    }
    cout << "The final number is: " << ans;
    return 0;
}