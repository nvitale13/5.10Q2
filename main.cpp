#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::setprecision;
using std::ios;

int main() 
{
  float radius = 76.83F;
  float height = 297.04F;
  const double PI = 3.1416;

  double volume = PI * (radius*radius) * height;

cout << "Volume: ";

cout.setf(ios::fixed);
cout << setprecision(2) << volume << endl;

return 0;
}