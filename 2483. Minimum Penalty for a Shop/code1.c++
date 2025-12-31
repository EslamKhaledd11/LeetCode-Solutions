#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool areAllCharsSameSTL(const string &str)
{
    return str.find_first_not_of(str[0]) == string::npos;
}

int bestClosingTime(string customers)
{
    bool are_same = areAllCharsSameSTL(customers);
    if (are_same)
    {
        if (customers[0] == 'N')
            return 0;
        else
            return customers.size();
    }

    int n_befor = 0;
    int y_after = 0;
    for (auto i : customers)
    {
        if (i == 'Y')
        {
            y_after++;
        }
    }

    vector<int> vec (customers.size() +1 , 0);

    for (int i = 0; i <= customers.size(); i++)
    {
        vec[i] = y_after + n_befor;

        if (i < customers.size())
        {
            if (customers[i] == 'N')
            {
                n_befor++;
            }
            else
            {
                y_after--;
            }
        }
    }

    int min_value = *min_element(vec.begin(), vec.end());

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == min_value)
            return i;
    }

    return 0; 
}

int main()
{
    string str = "YNYY";
    cout << bestClosingTime(str); // هيرجع 4 دلوقتي
    return 0;
}
