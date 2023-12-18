#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[100000],i;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(i=n; i>=1; i--)
    {
        cout<<a[i] <<" ";
    }

}
