///bootcamp contest 1 beginner
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,t,sum=0,p,ans;
    cin>>a>>t;
    while(t--)
    {
        cin>>p;
        sum=sum+p;
    }
    ans=a-sum;
    if(ans<0)
        cout<<"-1";
    else
        cout<<ans;
}

