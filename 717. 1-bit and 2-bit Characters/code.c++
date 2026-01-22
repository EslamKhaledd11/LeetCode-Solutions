#include <iostream>
#include <vector>
using namespace std ; 

bool isOneBitCharacter(vector<int>& bits) 
{
   int i = 0 ; 
   while ( i < bits.size()-1)
   {
    if (bits[i] == 1)
    {
        i+=2 ; 
    }
    else 
    {
        i++ ; 
    }
   }

   if (i == bits.size()-1)
   {
    return true ; 
   }
   else 
   {
    return false ; 
   }
}
int main ()
{
    vector<int> vec = {1,0,0} ; 
    cout << isOneBitCharacter(vec) ; 
    return 0 ; 
}