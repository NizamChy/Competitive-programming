#include<iostream>
using namespace std;

int main()
{
    int a[10000],n,i;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];

    int ans=0;
    for(i=0; i<n; i++)
    {
        if(a[i]!=a[0] && a[i]!=a[n-1])
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
