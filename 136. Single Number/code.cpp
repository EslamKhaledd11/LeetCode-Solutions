#include <iostream>
#include <vector>
#include <map>
using namespace std;

int singleNumber(vector<int>& nums)
{
    map<int, int> mp;

    for (int x : nums)
    {
        mp[x]++;
    }

    for (int x : nums)
    {
        if (mp[x] == 1)
        {
            return x;
        }
    }

    return -1; // safety
}

int main()
{
    vector<int> nums = {
        4,
        1,
    };
    cout << singleNumber(nums);
    return 0;
}