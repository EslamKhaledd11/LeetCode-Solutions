#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int counter = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            counter++;
        }
    }
    nums.erase(remove(nums.begin(), nums.end(), 0), nums.end());

    for (int i = 0; i < counter; i++)
    {
        nums.push_back(0);
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}

int main()
{
    vector<int> vec{0, 1, 0, 5, 12};
    moveZeroes(vec);

    return 0;
}