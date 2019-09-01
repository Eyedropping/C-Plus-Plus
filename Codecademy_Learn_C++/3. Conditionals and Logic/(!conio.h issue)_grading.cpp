#include <iostream>
#include <conio.h>

int main()
{

  int grade;

  std::cout << "Enter your grade: \n";
  std::cin >> grade;

  system("pause");

  if (grade < 60)
  {

    std::cout << "Fail\n";
  }

  else
  {

    std::cout << "Pass\n";
  }

  return 0;
}