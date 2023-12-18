#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,i,prime=0;
    cin>>x;
    for(i=2; i<sqrt(x); i++)
    {
        if(x%i==0)
            prime=1;
    }
    if(prime==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
