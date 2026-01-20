#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
using namespace std;

void findShortestSubArray(vector<int> nums)
{
    unordered_map<int, int> freq;
    int min = INT16_MAX;
    for (int i = 0; i < nums.size(); i++)
    {
        freq[nums[i]]++;
    }

    vector<int> mxi;
    int mx = 0;

    for (auto i : freq)
    {
        if (i.second > mx)
        {
            mxi.clear();

            mx = i.second;
            mxi.push_back(i.first);
        }
        else if (i.second == mx)
        {
            mxi.push_back(i.first);
        }
    }

    for (auto i : mxi)
    {
        int start = 0;
        int end = nums.size() - 1;

        while (start < nums.size())
        {
            if (nums[start] == i)
            {
                break;
            }
            else
            {
                start++;
            }
        }

        while (end != 0)
        {
            if (nums[end] == i)
            {
                break;
            }
            else
            {
                end--;
            }
        }

        int val = (end - start) + 1;

        if (val < min)
        {
            min = val;
        }
    }

    cout << min;
}
int main()
{
    vector<int> vec{1, 2, 2, 3, 1};
    findShortestSubArray(vec);
    return 0;
}