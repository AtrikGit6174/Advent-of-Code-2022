#include <iostream>
#include <cctype>
#include <unordered_set>

using namespace std;

int main() 
{
    int sum= 0;
    string s;
    
    while (cin>>s)
    {
        unordered_set<char> sety;
        char ch;
        for (int i=0; i<=s.size()/2 - 1; i++)
        {
            sety.insert(s[i]);
        }
        
        for (int i= s.size()/2; i<s.size(); i++)
        {
            if (sety.find(s[i]) != sety.end())
            {
                ch= s[i];
                break;
            }
        }
        
        sum += ch + ( islower(ch) ? 1 - 'a' : 27 - 'A'); 
        
    }
    
    cout<<sum;
}