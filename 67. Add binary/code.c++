#include <iostream>
#include <algorithm>
using namespace std;

string addBinary(string a, string b)
{
    int len_a = a.size() - 1;
    int len_b = b.size() - 1;
    int carry = 0;
    string res = "";

    while (len_a >= 0 || len_b >= 0 || carry)
    {
        int bit_a = 0;
        if (len_a >= 0)
        {
            bit_a = a[len_a] - '0';
        }
        else
        {
            int bit_b = 0;
        }

        int bit_b = 0;
        if (len_b >= 0)
        {
            bit_b = b[len_b] - '0';
        }
        else
        {
            bit_b = 0;
        }

        int sum = bit_a + bit_b + carry;

        res.push_back(char('0' + (sum % 2)));
        carry = sum / 2;

        len_a--;
        len_b--;
    }
    reverse(res.begin() , res.end()) ; 

    return res ; 
}
int main()
{

    
    return 0;
}