#include <sstream>
#include <iostream>

int main()
{

  int width = 20;
  int length = 30; // this was intentionally set to 0 to provoke RTE with unability to divide by 0

  double ratio = width / length; // this was intentionally set to int to provoke the compile error

  std::cout << std::defaultfloat << ratio << "\n";

  return ratio;
}
