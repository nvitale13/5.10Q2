#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::ios;

int main() 
{
 float radius = 0;
 float height = 0;

  cout << "Enter radius: ";
  cin >> radius;
  cout << "Enter height: ";
  cin >> height;

  const double PI = 3.1416;

  double volume = PI * (radius*radius) * height;

cout << "Volume: ";

cout.setf(ios::fixed);
cout << setprecision(2) << volume << endl;

return 0;
}