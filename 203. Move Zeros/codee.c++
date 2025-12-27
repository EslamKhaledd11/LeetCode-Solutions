#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i = 0;
    int j = 0;
    vector<int> nums {0,1,0,5,12} ; 
    while (i < nums.size())
    {
        // cout<<"indx "<<i<<"ele "<<nums[i]<<endl;
        if (nums[i] != 0)
        {
            swap(nums[i], nums[j]);
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }

    for (int i = 0 ; i < nums.size() ; i++)
        cout << nums[i] ; 
    return 0;
}