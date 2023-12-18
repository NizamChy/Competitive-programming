#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    {
        if(n==1)
            cout<<"-1";
        for(i=2; i<=n; i++)
        {
            if(i%2==0)
                cout<<i<<endl;

        }
    }
}
