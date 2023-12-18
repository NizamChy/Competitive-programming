#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,mul,ans,x,last,sel;
    cin>>a>>b>>c>>d;

    mul = ((a%100)*(b%100)*(c%100)*(d%100));

        last=mul%10;
        x=mul/10;
        sel=x%10;
        cout<<sel;
        cout<<last;


}




