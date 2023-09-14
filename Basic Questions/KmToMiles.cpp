#include <iostream>
using namespace std;
double convertToMiles(double Km)
{
    return (Km * 0.62137);
}
int main()
{
    double km;
    cout << "Enter the value in km: " << endl;
    cin >> km;
    
    cout << "Miles: " << convertToMiles(km) << endl;
    return 0;
}