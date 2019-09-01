#include <iostream>

using std::cin;
using std::cout;

int main()
{
    double ewght;
    int planet;

    cout << "\n\n";
    cout << "Step 1. Please enter your weight: \n";
    cin >> ewght;
    cout << "\n\n";

    cout << "Step 2. Please enter the number of the destination planet: \n";
    cout << "    1. Venus;    2. Mars;     3. Jupiter \n";
    cout << "    4. Saturn;   5. Uranus;   6. Neptune \n";
    cin >> planet;
    cout << "\n\n";

    switch (planet)
    {

    case 1:
        cout << "Your weight will be: " << ewght * 0.78 << " kgs. \n";
        break;
    case 2:
        cout << "Your weight will be: " << ewght * 0.39 << " kgs. \n";
        break;
    case 3:
        cout << "Your weight will be: " << ewght * 2.65 << " kgs. \n";
        break;
    case 4:
        cout << "Your weight will be: " << ewght * 1.17 << " kgs. \n";
        break;
    case 5:
        cout << "Your weight will be: " << ewght * 1.05 << " kgs. \n";
        break;
    case 6:
        cout << "Your weight will be: " << ewght * 1.23 << " kgs. \n";
        break;
    default:
        cout << "Unknown error.\n";
        break;
    }
    cout << "SUCCESS";
    return 0;
}