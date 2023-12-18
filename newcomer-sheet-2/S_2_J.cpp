#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n;
    cin>>n;
    for(i=2; i<=n; i++)
    {
        k=0;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                k=1;
                break;
            }
        }
        if(k==0)
            cout<<i<<" ";
    }
}
