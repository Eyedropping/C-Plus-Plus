#include <iostream>
#include <vector>

int main()
{
    int sum = 0;
    int product = 1;

    std::vector<int> even = {2, 4, 3, 6, 1, 9};

    for (int i = 0; i < even.size(); i++)
    {
        if (even[i] % 2 == 0)
        {
            sum = sum + even[i];
        }
    }

    for (int i = 0; i < even.size(); i++)
    {
        if (even[i] % 2 == 1)
        {
            product = product * even[i];
        }
    }

    std::cout << "Sum of even numbers is " << sum << "\n";
    std::cout << "Product of odd numbers " << product << "\n";

    return 0;
}