#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int repeatedNTimes(vector<int> &nums)
{
    int n = nums.size() / 2;
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
        if (mp[nums[i]] == n)
        {
            return nums[i];
        }
    }
    return -1;
}

int main()
{
    vector<int> vec{5, 1, 5, 2, 5, 3, 5, 4};
    cout << repeatedNTimes(vec);
    return 0;
}