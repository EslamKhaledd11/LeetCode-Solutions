#include <iostream>
using namespace std;

bool areAllCharsSameSTL(const string &str)
{
    return str.find_first_not_of(str[0]) == string::npos;
}

void bestClosingTime(string customers)
{

    // bool are_same = areAllCharsSameSTL(customers) ;
    // if (customers[0] == 'N' && are_same)
    // {
    //     return 0 ;
    // }
    // else if (customers[0] == 'Y' && are_same)
    // {
    //     return customers.size() ;
    // }
    int curr = INT16_MAX;
    int x = 0;
    for (int i = 0; i < customers.size(); i++)
    {
        int y = 0;
        for (int j = i; j < customers.size(); j++)
        {
            if (customers[j] == 'Y')
            {
                y++;
            }
        }
        if (y < curr)
        {
            curr = y;
            x = i;
        }
            cout << x << " ";
    }


}
int main()
{
    string str = "YYNY";
    bestClosingTime(str);
    return 0;
}
