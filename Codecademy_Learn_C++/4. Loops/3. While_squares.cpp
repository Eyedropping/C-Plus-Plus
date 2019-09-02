#include <iostream>

using std::cin;
using std::cout;

int main()
{

    int i = 0;
    int square = 0;

    // Write a while loop here:

    while (i < 10)
    {
        cout << i << " " << square << "\n";
        i++;
        square = i * i;
    }

    return 0;
}