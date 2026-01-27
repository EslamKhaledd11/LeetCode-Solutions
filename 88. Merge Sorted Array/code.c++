#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int cnt = 0;
    int i = nums1.size() - 1;
    while (i >= 0 && n)
    {
        if (nums1[i] == 0)
        {
            cnt++;
        }
        else
        {
            break;
        }
        i--;
        n--;
    }
    while (cnt != 0)
    {
        nums1.pop_back();
        cnt--;
    }

    int index = 0;
    for (int i = 0; i < nums2.size(); i++)
    {
        nums1.push_back(nums2[i]);
    }
    sort(nums1.begin(), nums1.end());
}

int main()
{
    vector<int> nums1 = {-1, -1, 0, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {-1, 0};
    int n = 2;

    merge(nums1, m, nums2, n);

    return 0;
}
