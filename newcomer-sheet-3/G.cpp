#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[100000],b[100000],i,j,flag=0;

    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(i=1, j=n; j>=1; i++,j--)
    {
        b[i] = a[j];
    }
    for(i=1; i<=n; i++)
    {
        if(a[i]!=b[i])
          {
              flag = 1;
              break;
          }
    }
    if(flag==0)
        cout<<"YES";
    else
        cout<<"NO";
}
