#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000],i,n,mini,pos;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(i=1; i<=n; i++)
    {
        if(a[i]<mini)
        {
            mini = a[i];
            pos = i;
        }
    }
    cout<<mini <<" "<<pos;
}
