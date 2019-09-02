#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string input = "Hello, Human!";
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    vector<char> result;
    for (int i = 0; i < input.size(); i++)
    {
        for (int j = 0; j < vowels.size(); j++)
        {
            if (input[i] == vowels[j])
            {
                result.push_back(input[i]);
            }
        }
    }
    for (int z = 0; z < result.size(); z++)
    {
        if (result[z] == 'e' || result[z] == 'u')
        {
            cout << result[z];
            cout << result[z];
        }
        else
        {
            cout << result[z];
        }
    }
    cout << "\n";

    return 0;
}