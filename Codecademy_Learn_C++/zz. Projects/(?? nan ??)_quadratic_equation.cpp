#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double a, b, c;

  cout << "Enter the value for the a-constant: ";
  cin >> a;

  cout << "Enter the value for the b-constant: ";
  cin >> b;

  cout << "Enter the value for the C-constant: ";
  cin >> c;

  double root1, root2;

  root1 = (-b + std::sqrt(b * b - 4 * a * c)) / (2 * a);
  root2 = (-b - std::sqrt(b * b - 4 * a * c)) / (2 * a);

  std::cout << "Root 1 is " << root1 << "\n";
  std::cout << "Root 2 is " << root2 << "\n";

  return 0;
}