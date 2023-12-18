#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main ()
{
    int i,t,even=0,odd=0,x,y;
    cin>>t;
    int a[t];
    for(int i=0; i<t; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<t; i++)
    {
        if(a[i] % 2 == 0)
        {
            even++;
            x=i;
        }
        else
        {
            odd++;
            y=i;
        }
    }
    if(even<odd)
        cout<<x+1;
    else
        cout<<y+1;

}
