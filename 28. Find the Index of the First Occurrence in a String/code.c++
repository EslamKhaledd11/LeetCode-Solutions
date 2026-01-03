#include <iostream>
#include <string>
using namespace std;

int str(string haystack, string needle)
{
    int s_size = haystack.size();
    int y_Size = needle.size();

    for (int i = 0; i < s_size - y_Size; i++)
    {
        bool is_found = true;

        for (int j = 0; j < y_Size; j++)
        {
            if (haystack[i + j] != needle[j])
            {
                is_found = false;
                break;
            }
        }
        if (is_found)
        {
            return i;
        }
        else {
            return -1 ; 
        }
    }
}
int main()
{
    string haystack = "leetcode", needle = "leet0";
    cout << str(haystack, needle);
    return 0;
}