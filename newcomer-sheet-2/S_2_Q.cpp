#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,temp,r,t;
    cin>>t;
    while(t--)
    {
        cin>>n;

        temp=n;
        if(n==0)
            cout<<"0";
        while(temp!=0)
        {
            r=temp%10;
            cout<<r<<" ";
            temp=temp/10;
        } cout<<endl;
    }
}
