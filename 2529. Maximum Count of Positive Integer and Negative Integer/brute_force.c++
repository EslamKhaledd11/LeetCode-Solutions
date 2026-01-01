#include <iostream>
#include <vector>
using namespace std;

int maximumCount(vector<int> &nums)
{
    int less_zero = 0;
    int more_zero = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            if (nums[i] < 0)
            {
                less_zero++;
            }
            else
            {
                more_zero++;
            }
        }
    }
    if (less_zero > more_zero || less_zero == more_zero)
    {
        return less_zero;
    }
    return more_zero;
}

int main()
{
    vector<int> vec{-1, 1, 2};
    cout << maximumCount(vec);
    return 0;
}
