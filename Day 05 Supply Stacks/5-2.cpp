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
        string crates= string(stacks[source-1], stacks[source-1].size()-num_box);
        stacks[source-1]= string(stacks[source-1], 0, stacks[source-1].size()-num_box);
        stacks[dest-1]= stacks[dest-1] + crates;
        
    }
    
    for (int i=0; i<stacks.size(); i++)
    {
        cout<<stacks[i].back();
    }
    
}