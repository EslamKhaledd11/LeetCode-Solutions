#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
using namespace std ; 

int main ()
{
    vector <int> vec {1 ,1 ,1 , 2,2,2,3,3} ; 
    unordered_map<int , int> mp ; 

    for (int i = 0 ; i < vec.size() ; i++)
    {
        mp[vec[i]++]; 
    }

    
    return 0 ; 
}