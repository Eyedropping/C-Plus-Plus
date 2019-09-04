#include <iostream>

std::string enter_code(int passcode)
{

    std::string secret_knowledge = "https://s3.amazonaws.com/codecademy-content/courses/regex/onyourexcitingjourneylearningtocodeyouwillfindthis.gif";

    if (passcode == 0310) // integers starting from 0 are octal, so the input must respect the format
    {

        std::cout << secret_knowledge << "\n";
    }
    else
    {

        std::cout << "Sorry, incorrect!\n";
    }
    return secret_knowledge;
}

int main()
{
    int code;
    std::cout << "Enter the code: ";
    std::cin >> code; // 0310 in octal is 200 in decimal
    enter_code(code);
    // std::cout << secret_knowledge << "\n"; - you can't print it out - thi is in a func's local scope
    return 0;
}
