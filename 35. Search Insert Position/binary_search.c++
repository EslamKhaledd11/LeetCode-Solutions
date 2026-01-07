#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int> &nums, int target)
{
    int l = 0;
    int h = nums.size() -1;
    while (l <= h)
    {
        int m = (l + h) / 2;
        if (nums[m] == target)
        {
            return m;
        }
        if (nums[m] > target)
        {
            h = m - 1;
        }
        else
        {
            l = m +1 ;
        }
    }
    return l+1;
}
int main()
{
    vector<int> nums = {1,3,5,6};
    cout << binary_search(nums , 2) ; 
    return 0;
}