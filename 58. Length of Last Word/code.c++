#include <iostream>
#include <map> 
using namespace std;

int lengthOfLastWord(string s)
{
    for (int i = s.size()-1 ; i > 0 ; i--)
    {
        if (s[i] == ' ')
        {
            s.erase(i , 1) ; 
        }
        else {
            break ; 
        }
    }  
    int counter = 0 ; 
    for (int i = s.size()-1 ; i>= 0 ;i-- )
    {
        if (s[i] != ' ')
        {
            counter++ ; 
        }
        else 
        {
            break; 
        }
    }

    return counter ; 
     
}
int main()
{
    cout << lengthOfLastWord("1");

    return 0;
}