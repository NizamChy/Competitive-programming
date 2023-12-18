#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000],i,n,mini=1e5,cunt=0;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }

    for(i=1; i<=n; i++)
    {
        if(a[i]<mini)

            mini=a[i];

    }
    for(i=1; i<=n; i++)
    {
        if(mini==a[i])
        {
            cunt++;
        }
    }
    if((cunt%2)==0)
        cout<<"Unlucky";
    else
        cout<<"Lucky";
}
