//https://codeforces.com/contest/1554/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long ar[n+3], ans=0;
        for(int i=0; i<n; i++)
            cin>>ar[i];
        for(int i=0; i<n-1; i++)
        {
            ans = max(ans, ar[i] * ar[i+1]);
        }
        cout<<ans<<endl;
    }
}
