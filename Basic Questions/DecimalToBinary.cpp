#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int decimal;
    cout << "Enter number in decimal number system: ";
    cin >> decimal;
    vector<int> ans;

    while (decimal)
    {
        int rem = decimal % 2;
        ans.push_back(rem);
        decimal /= 2;
    }

    cout << "Binary representation of " << decimal << " is ";
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        cout << ans[i];
    }
    return 0;
}