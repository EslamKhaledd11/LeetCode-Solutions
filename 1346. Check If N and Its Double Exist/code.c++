#include <iostream>
#include<vector> 
#include <algorithm>
using namespace std ; 

 bool checkIfExist(vector<int>& arr)
 {
    for (int i = 0 ; i < arr.size() ; i++)
    {
        for (int j = i+1 ; j < arr.size() ; j++)
        {
            if (arr[i] == 2 * arr[j])
            {
                return true ; 
            }
        }
    }

    sort(arr.begin() , arr.end()); 
    return false ; 
 }

int main ()
{
    vector <int> vec {10,2,5,3} ; 
    cout << checkIfExist(vec) ;
    return 0 ; 
}