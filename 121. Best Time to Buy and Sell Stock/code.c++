#include <iostream>
using namespace std;
#include <vector>

int max1Profit(vector<int> &prices)
{
    int min1 = 0;
    int max1 = 1;
    int value = 0;
    int new_value = 0 ; 
    while (max1 < prices.size())
    {
        int value = prices[max1] - prices[min1];
        if (prices[max1] < prices[min1])
        {
            min1 = max1;
        }
        if (value > new_value)
        {
            new_value = value ; 
        }
        
        max1++;
    }
    return new_value ;
}
int main()
{
    vector<int> vec{7, 1, 5, 3, 6, 4};
    vector<int> vec1{1,2};

    cout << max1Profit(vec1);
    return 0;
}