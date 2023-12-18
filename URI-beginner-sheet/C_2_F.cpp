#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,x,i,a[10001],ans=0,flag=0;
    cin>>N;
    cin>>x;
    for(i=1; i<=N; i++)
        cin>>a[i];

    for(i=0; i<=N; i++)
    {
        ans+=a[i];
        if(ans<=x)
        {
            flag++;
        }
    }

    cout<<flag;


}
