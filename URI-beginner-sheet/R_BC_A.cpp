#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n;
    int sum=0;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        sum=sum+n;
    }
    cout<<sum%t;
}
