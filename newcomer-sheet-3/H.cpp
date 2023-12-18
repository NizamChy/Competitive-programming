#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[100000],i,mini,temp,j;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>> a[i];
    }
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(i=1; i<=n; i++)
    {
        cout<<a[i]<<" ";
    }
}
