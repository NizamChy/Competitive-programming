#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,i;
    string s;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>s;
        if(s == "++X" || s == "X++")
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout<<x<<endl;
}
