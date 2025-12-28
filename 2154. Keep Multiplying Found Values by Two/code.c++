#include <iostream>
#include <vector>
#include <map>
using namespace std ; 


int findFinalValue(vector<int>& nums, int original)
{
    map <int , int> mp; 
    for (auto i : nums)
    {
        mp[i] = i ;  ; 
    }

    while (true)
    {
        if (mp.count(original) == true)
        {
            original*=2; 
            continue;
        }
        else {
            break ; 
        }
        
    }

    return original ; 
}
int main ()
{   
    vector <int> vec {5,3,6,1,12} ; 
    vector <int> ll {2,7,9}; 
    cout << findFinalValue(ll , 4);
    return 0 ; 
}