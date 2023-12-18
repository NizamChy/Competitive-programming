#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    int capacity=0,current=0;
    while(t--)
    {
        cin>>a>>b;
        current = b + (current-a);
        if(current > capacity)
        {
            capacity=current;
        }
    }
    cout<<capacity;
}
