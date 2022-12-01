#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
    string s;
    int x= 0, maxi= 0;
    
    while (getline(cin, s))
    {
        if (s == "")
        {
            maxi= max(x, maxi);    
            x= 0;
        }
        
        else
            x += stoi(s);
    }
    
    cout<<maxi;
    return 0;
}