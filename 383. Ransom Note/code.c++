#include <iostream>
#include <unordered_map>
using namespace std;
bool canConstruct(string ransomNote, string magazine)
{
    unordered_map<char, int> mp;
    unordered_map<char, int> mp2;

    for (int i : ransomNote)
    {
        mp[i]++;
    }
    for (int i : magazine)
    {
        mp2[i]++;
    }
    for (auto i : ransomNote)
    {
        if (!(mp[i] <= mp2[i]))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string ransomNote = "a", magazine = "b";
    cout << boolalpha << canConstruct(ransomNote, magazine);
    return 0;
}