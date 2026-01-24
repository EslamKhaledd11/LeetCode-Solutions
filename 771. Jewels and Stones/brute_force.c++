#include <iostream>
using namespace std;

int numJewelsInStones(string jewels, string stones)
{
    int counter = 0;
    for (int i = 0; i < jewels.size(); i++)
    {
        for (int j = 0; j < stones.size(); j++)
        {
            if (jewels[i] == stones[j])
            {
                counter++;
            }
        }
    }
}
int main()
{
    // string jewels = "aA", stones = "aAAbbbb" ;
    string jewels = "z", stones = "ZZ";
    cout << numJewelsInStones(jewels, stones);
    return 0;
}