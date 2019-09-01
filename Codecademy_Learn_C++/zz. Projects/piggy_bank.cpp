#include <iostream>

void exchange(double, double);

int main()
{
    double rate = 58;
    double sum = 5000;
    exchange(rate, sum);
    exchange(60, 5000);
    return 0;
}

void exchange(double currate, double sum)
{
    double result = sum / currate;
    std::cout << "Rate: " << currate << "\tSum: " << sum
              << "\tResult: " << result << std::endl;
}