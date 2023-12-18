#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num[100001],n,i,m,c=0,pos;
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>num[i];
    }
    cin>>m;
    for(i=0; i<n; i++)
    {
        if(num[i]==m)
        {
            c=1;
            pos = i;
            break;
        }

    }
    if(c==1)
        cout<<pos;
    else
        cout<<"-1";

}
