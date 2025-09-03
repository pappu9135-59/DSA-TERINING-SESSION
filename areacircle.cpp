// Write a program to calculate circumference of a circle.
#include <iostream>
#define PI 3.14 
using namespace std;
int main()
{
    double radius, circumference;
    cout << "Enter the radius of circle: ";
    cin >> radius;
    circumference = 2 * PI * radius;
    cout << "Circumference of circle: " << circumference << endl;
    return 0;
}