#include <iostream>
#include <vector>

int main()
{

    std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};

    // Add more
    grocery.push_back("GTG");
    grocery.push_back("GTG");
    grocery.push_back("GTG");

    std::cout << grocery.size() << "\n";
    std::cout << "\n";
    std::cout << std::vector<std::string> grocery << "\n";

    return 0;
}