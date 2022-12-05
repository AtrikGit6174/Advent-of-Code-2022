#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    vector<string> stacks(9);
    
    for (int i=0; i<stacks.size(); i++)
        cin>>stacks[i];
    
    string wd;
    int num_box, source, dest;
    
    while (cin>>wd>>num_box>>wd>>source>>wd>>dest)
    {
        while (num_box--)
        {
            char ch= stacks[source-1].back();
            stacks[source-1]= string(stacks[source-1], 0, stacks[source-1].size()-1);
            stacks[dest-1].push_back(ch);
        }
    }
    
    for (int i=0; i<stacks.size(); i++)
    {
        cout<<stacks[i].back();
    }
    
}