#include <iostream>
using namespace std;

int main()
{
    double height, weight, bmi;

    cout << "Type in your height (m): ";
    cin >> height;

    cout << "Type in your weight (kgs): ";
    cin >> weight;

    bmi = (weight / (height * height)) * 10000;

    cout << "Your BMI is " << bmi << "%\n";

    return 0;
}