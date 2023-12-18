#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,mul=1,t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        mul=mul*n;
    }
    if(mul<1000000000000000001)
    cout<<mul;
    else
        cout<<"-1";
}
