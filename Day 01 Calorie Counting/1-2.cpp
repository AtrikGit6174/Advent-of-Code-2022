#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
    string s;
    int x= 0, maxi1= 0, maxi2= 0, maxi3= 0;
    
    while (getline(cin, s))
    {
        if (s == "")
        {
            if (x > maxi1)
            {
                maxi3= maxi2;
                maxi2= maxi1;
                maxi1= x;
            }
            
            else if (x > maxi2)
            {
                maxi3= maxi2;
                maxi2= x;
            }
            
            else
                maxi3= max(x, maxi3);
                
            x= 0;
        }
        
        else
            x += stoi(s);
    }
    
    cout<<maxi1 + maxi2+ maxi3;
    return 0;
}