#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t,fact=1,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1; i<=n; i++)
            fact=fact*i;
            cout<<fact<<endl;
            fact=1;
    }


}
