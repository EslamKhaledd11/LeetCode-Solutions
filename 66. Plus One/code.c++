#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int> digits)
{
    int n = digits.size() ;
    for (int i = n-1 ; i >=0 ; i--)
    {
        if (digits[i] < 9)
        {
            digits[i]++ ; 
            return digits ; 
        }
        digits[i] = 0 ; 
    } 

    vector<int> vec (n+1);
    vec[0] = 1; 
    return vec ; 
}
int main()
{
    vector<int> vec = {9, 9, 9};
    plusOne(vec);

    return 0;
}