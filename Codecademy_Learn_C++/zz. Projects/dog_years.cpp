// Learn C++
// Dog Years

#include <iostream> // Inculdes standard I/O library

int main()
{ // Declares the main function of C++ in the type of integer

  std::string dog_name; // Declares a variable with a string type called "dog_name" that will store the name of the fuzzy friend. It will be used in input further
  int dog_age;          // Declares a var with an integer type called 'dog_age' that will store the number of years of the fuzzy friend. It will be also used in input further

  int early_years, later_years, human_years; // Multi-line declaration of 3 integer vars, storing memory for dog's early [2 dog's first years count as 21 human yrs (10,5 h/y each] yrs; dog later yrs (dog_age-2) * 4 [subtracting already converted first two years from age inputted]; and human years which will be the sum of those above described

  std::cout << "Enter your dog's name: "; // Directing a program to output a phrase asking as user to input the dog's name
  std::cin >> dog_name;                   // Whatever is inputted (if it is a string, due to declared dog_name type), will be assigned to this var

  std::cout << "Enter your dog's age: "; // Directing a program to output a phrase asking as user to input the dog's age
  std::cin >> dog_age;                   // Whatever is inputted (if it is a integer, due to declared dog_name type), will be assigned to this var

  early_years = 21; // Assigning the '21' integer value to the EY var

  later_years = (dog_age - 2) * 4; // Assigning the expression to the LY var

  human_years = early_years + later_years; // Assigning the expression to the HY var

  std::cout << "My name is " << dog_name << "! Ruff Ruff, I am " << human_years << " years old in human years.\n"; // Diecting the program to chain output the phrase, containing the static strings with some text along with values, we got from our variables, using standard charatcer output stream metho

  return 0; // Asking a program to return zero
}