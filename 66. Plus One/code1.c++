#include <iostream>
#include<vector>
using namespace std ; 

int main ()
{
    int x = 100 ; 
    vector<int> arr ; 
    for (int i = 0 ; i < 3 ; i++)
    {
        int m  = x/100;
        arr.push_back(m) ; 
        x/=10 ; 
    }

        for (int i = 0 ; i < 3 ; i++)
    {
        
        cout << arr[i] ;  
    }
    cout << x ; 
    return 0 ; 

}