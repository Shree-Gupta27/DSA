#include <iostream>
using namespace std;
double area(double r)
{
    double area = 3.141 * r * r;
    return area;
}
int main()
{
    double radius;
    cout << "Enter the radius: " << endl;
    cin >> radius;

    cout << "Area of circle: " << area(radius) << endl;
    return 0;
}