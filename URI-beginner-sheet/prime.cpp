#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,i,prime=0,j;
    cin>>x;
    for(j=2; j<=x; j++)
    {
        if(x%j!=0)
            cout<<j<<" ";
    }
}
