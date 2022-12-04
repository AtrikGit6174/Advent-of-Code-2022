#include <iostream>

using namespace std;

int main() 
{
    int x1, y1, x2, y2;
    char ch;
    int count= 0;
    
    while (cin>>x1>>ch>>y1>>ch>>x2>>ch>>y2)
    {
        if ((x1<=x2 and y2<=y1) or (x2<=x1 and y1<=y2))
            count++;
    }
    
    cout<<count;
}