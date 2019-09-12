#include <iostream>
#include "ufo_functions.hpp"
#include <vector>

using std::cin;
using std::cout;
using std::string;
using std::vector;

int main()
{
    string codeword = "codecademy";
    string answer = "__________";
    int misses = 0;
    vector<char> incorrect;
    bool guess = false;
    char letter;

    greet();
    cout << "\n";

    // cout << "Codeword: \n";

    while (answer != codeword && misses < 7)
    {
        display_misses(misses);
        display_status(incorrect, answer);
        cout << "Please enter your guess:\n";
        cin >> letter;
        for (int i = 0; i < codeword.length(); i++)
        {
            if (letter == codeword[i])
            {
                answer[i] = letter;
                guess = true;
            }
        }

        if (guess)
        {
            cout << "Correct!\n";
        }
        else
        {
            cout << "Incorrect! The tractor beam pulls the person in further.\n";
            incorrect.push_back(letter);
            misses++;
        }

        guess = false;
    }

    end_game(answer, codeword);
    return 0;
}