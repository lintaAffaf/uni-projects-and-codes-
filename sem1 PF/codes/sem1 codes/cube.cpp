#include <iostream>
using namespace std;
inline double cube(const double side)
{
    return side * side * side;
}
int main()
{
    double sideValue;
    cout << "enter the side length of your cube: ";
    cin >> sideValue;
    cout << "volume of cube with side " << sideValue << " "
         << "is"
         << " " << cube(sideValue) << endl;
}

