#include <iostream>

int main()
{

    double ph1;

    std::cout << "Enter the pH value: \n";
    std::cin >> ph1;

    double ph = ph1;

    // Write the if, else if, else here:

    if (ph > 7)
    {

        std::cout << "Basic\n";
    }
    else if (ph < 7)
    {

        std::cout << "Acidic\n";
    }
    else
    {

        std::cout << "Neutral\n";
    }
