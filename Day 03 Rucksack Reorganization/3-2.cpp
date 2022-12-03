#include <iostream>
#include <cctype>
#include <unordered_set>

using namespace std;

int main() 
{
    int sum= 0;
    string s1, s2, s3;
    
    while (cin>>s1>>s2>>s3)
    {
        unordered_set<char> sety1;
        char ch;
        
        for (auto i:s1)
            sety1.insert(i);
        
        unordered_set<char> sety2;
        for (auto i:s2)
        {
            if (sety1.find(i) != sety1.end())
                sety2.insert(i);
        }
        
        sety1= sety2;
        sety2.clear();
        
        for (auto i:s3)
        {
            if (sety1.find(i) != sety1.end())
                sety2.insert(i);
        }
        
        ch= *(sety2.begin());
        sum += ch + ( islower(ch) ? 1 - 'a' : 27 - 'A'); 
        
    }
    
    cout<<sum;
}