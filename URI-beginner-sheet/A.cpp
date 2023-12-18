#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,t,sum=0,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
    k=n%6;
    if(k==0)
    {
        count++;
        sum=sum+n;
    }
    }
    cout<<count<<" "<<sum<<endl;
}
