/* Hey! This is the program that will emulate
   the Rock, Scissors, Paper game!*/

#include <iostream>
#include <stdlib.h>

using std::cin;
using std::cout;

int main()
{

    /* Below we set:
  		- random numbers generator source
      - int var 'computer' that will generate 1, 2 or 3 numbers
      - int var 'user' that will store the user's choice (from input)
  */

    srand(time(NULL));
    int computer = rand() % 3 + 1;
    int user = 0;

    // Below we set the output that pro24mpts user to make a choice //

    std::cout << "====================\n";
    std::cout << "1) ✊\n";
    std::cout << "2) ✋\n";
    std::cout << "3) ✌️\n";

    std::cout << "shoot! \n\n";

    cin >> user;

    cout << "The computer shot " << computer << "!\n\n";

    // Adding logic for Rock (1)
    if ()
    {

        cout << "You lose!\n";
    }
    else if (user == 1 && computer == 3)
    {

        // Adding logic for Paper (2)

        if (user == 2 && computer == 3)
        {

            cout << "You lose!\n";
        }
        else if (user == 2 && computer == 1)
        {

            cout << "You win!\n";
        }
        else if (user == 2 && computer == 2)
        {

            cout << "Draw!\n";
        }

        // Adding logic for Scissors (3)

        if (user == 3 && computer == 1)
        {

            cout << "You lose!\n";
        }
        else if (user == 3 && computer == 2)
        {

            cout << "You win!\n";
        }
        else if (user == 3 && computer == 3)
        {

            cout << "Draw!\n";
        }

        return 0;
    }