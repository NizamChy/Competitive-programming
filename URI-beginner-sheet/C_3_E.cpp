#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll int n,t;
    cin>>n;
    cin>>t;
    ll int a[n+1];
    for(int i=0; i<n; i++)
         scanf("%lld",&a[i]);
    while(t--)
    {
        ll int value,mid;
        scanf("%lld",&value);
        ll int left=-1, right=n;
        while(left+1 < right)
        {
            ll int mid = (left+right)/2;
            if(a[mid]<value)
                left=mid;
            else
                right=mid;
        }
        if(left<right && a[right]==value)
            printf("%lld\n",right);
        else
            printf("-1\n");

    }
}
