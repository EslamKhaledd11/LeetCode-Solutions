#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> apply_operations(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == nums[i + 1])
        {
            nums[i] *= 2;
            nums[i + 1] = 0;
        }
    }

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

    for (int i = 0 ; i < nums.size(); i++)
    {
        cout << nums[i] << " "; 
    } 
}
int main()
{
    vector<int> vec = {0,1};
    apply_operations(vec) ; 

    return 0;
}