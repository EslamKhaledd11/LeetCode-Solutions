#include <iostream>
#include <unordered_map>
using namespace std;

int numJewelsInStones(string jewels, string stones)
{
    unordered_map<char, int> mp;

    for (auto i : stones)
    {
        mp[i]++;
    }

    int counter = 0;
    for (auto i : jewels)
    {
        counter += mp[i];
    }

    return counter;
}
int main()
{
    // string jewels = "aA", stones = "aAAbbbb" ;
    string jewels = "z", stones = "ZZ";
    cout << numJewelsInStones(jewels, stones);
    return 0;
}