#include <iostream>
#include <vector>
using namespace std;
vector<double> convertTemperature(double celsius)
{
    double Kelvin = celsius + 273.15;
    double Fahrenheit = (celsius * 1.80) + 32.00;
    vector<double> ans = {Kelvin, Fahrenheit};
    return ans;
}
int main()
{
    double Celsius;
    cout<<"Enter temperature in Celsius: ";
    cin>>Celsius;
    
    vector<double> answer = convertTemperature(Celsius);
    cout << "The temperature in kelvin is: " << answer[0] << endl << "The temperature in fahrenheit is:" << answer[1];

    return 0;
}