#include <iostream>
using namespace std;
int prime(int N)
{
    int c = 0;
    for (int j = 1; j <= N; j++)
    {
        if (N % j == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        return N;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if(prime(i)!=0)
        cout<<prime(i)<<" ";
    }
    return 0;
}