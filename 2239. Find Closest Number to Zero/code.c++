#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

int findClosestNumber(vector<int> &nums)
{
    int closest = nums[0];

    for (int i : nums)
    {
        if (abs(i) < abs(closest))
        {
            closest = i;
        }
    }

    int x = closest;
    for (int i = 0; i < nums.size(); i++)
    {
        if ((closest < 0) && nums[i] == abs(closest))
        {
            x = abs(nums[i]);
        }
    }

    return x;
}
int main()
{
    vector<int> vec{-10000 , -10000};
    cout << findClosestNumber(vec);
    return 0;
}