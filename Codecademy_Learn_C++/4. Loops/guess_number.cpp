#include <iostream>

int main()
{

    int guess;

    int tries = 0;

    std::cout << "I have a number 1-10.\n";
    std::cout << "Please guess it: ";
    std::cin >> guess;

    // Write a while loop here:

    while (guess != 8 && tries < 10)
    {

        std::cout << "Wrong guess, try again: \n";
        std::cin >> guess;

        tries++;
    }

    if (guess == 8)
    {

        std::cout << "You got it!\n";
    }

    if (tries >= 10)
    {

        std::cout << "********************************\n";
        std::cout << "________________________________\n";
        std::cout << "Wasted all attempts! Aborting...\n";
        std::cout << "________________________________\n";
        std::cout << "********************************\n";
    }

    return 0;
}