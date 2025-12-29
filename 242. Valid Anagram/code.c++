#include <iostream>
#include <map>
using namespace std ; 

int main ()
{
    multimap <char , int > mp ; 

    string s = "a"; 
    for (int i =  0 ; i < s.size() ; i++)
    {
        mp.insert({s[i] , 1}); 
    }

    string t = "aa";
    multimap <char , int> np ; 
    for (int i =  0 ; i < t.size() ; i++)
    {
         mp.insert({t[i] , 1}); 
    }
    if (mp == np && mp.size() == np.size())
    {
        cout << true ; 
    }
    else {
        cout << false ; 
    }

    return 0 ; 
}
