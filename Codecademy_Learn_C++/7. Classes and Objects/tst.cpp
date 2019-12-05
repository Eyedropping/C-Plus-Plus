#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Database
{
private:
    const string isp_zones[4] = {"RU", "EU", "US", "JP"};
    const string isp[13] = {"MTS", "Beeline", "MegaFon", "Tele2", "Yota", "Orange Telecom", "Cingular", "AT&T", "Verizon", "T-Mobile", "DoCoMo", "Softbank", "KDDI"};

public:
    void select_isp(void)
    {
        int selection;

        cout << "\nEnter the GEO-Zone:\n";
        cout << "1. RU    2. EU    \n";
        cout << "3. US    4. JP    \n\n";
        cin >> selection;

        if (selection == 1)
        {
            cout << "\nRU providers are:\n";
            for (int i = 0; i <= 4; i++)
            {
                if (i != 4)
                {
                    cout << isp[i] << ", ";
                }
                else
                {
                    cout << isp[i] << '.' << "\n\n";
                }
            }
        }
        else if (selection == 2)
        {
            cout << "\nEU providers are:\n";
            cout << isp[5] << ", " << isp[9] << '.';
        }
        else if (selection == 3)
        {
            cout << "\nUS providers are:\n";
            for (int i = 6; i <= 8; i++)
            {
                if (i != 8)
                {
                    cout << isp[i] << ", ";
                }
                else
                {
                    cout << isp[i] << '.' << "\n\n";
                }
            }
        }
        else if (selection == 4)
        {
            cout << "\nJP providers are:\n";
            for (int i = 10; i <= 12; i++)
            {
                if (i != 12)
                {
                    cout << isp[i] << ", ";
                }
                else
                {
                    cout << isp[i] << "." << "\n\n";
                }
            }
        }
    }
};

int main(int argc, const char **argv)
    {

        Database Tolyasik;
        Tolyasik.select_isp();
        return 0;
    }
