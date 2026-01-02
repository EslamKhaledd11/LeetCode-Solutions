#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    vector<int> vec(tc);
    for (int i = 0; i < tc; i++)
        cin >> vec[i];

    int val;
    cin >> val;

    for (int i = 0; i < tc; i++)
    {
        if (vec[i] == val)
        {
            vec.erase(remove(vec.begin(), vec.end(), val), vec.end());
        }
    }

    for (int i = 0; i < vec.size(); i++)
    {
     
        cout << vec[i];
    }
    return 0;
}