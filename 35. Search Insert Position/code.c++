#include <iostream>
#include <vector>
using namespace std ; 

int searchInsert (vector<int> &nums , int target )
{
    for (int i = 0 ; i < nums.size() / 2 ; i++)
    {
        if (nums[i] == target )
        {
            return i ; 
        }
        
    }

    
    
}
int main ()
{ 
    vector<int> vec = {11,3,5,6} ; 
    cout << searchInsert(vec , 7) ; 

    return 0 ; 
}