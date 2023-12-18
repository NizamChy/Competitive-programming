#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,num,e=0,o=0,p=0,m=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>num;
        if(num%2==0)
            e++;
        if(num%2!=0)
            o++;
        if(num>0)
            p++;
        if(num<0)
            m++;
    }
    cout<<"Even: "<<e<<endl;
    cout<<"Odd: "<<o<<endl;
    cout<<"Positive: "<<p<<endl;
    cout<<"Negative: "<<m<<endl;

}
