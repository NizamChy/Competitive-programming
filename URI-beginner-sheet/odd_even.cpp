#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,evn=0,odd=0,pos=0,neg=0;

    cin>>n;
    while(n--)
    {
        cin>>t;
        if(t%2==0)
            evn++;
        else
            odd++;
        if(t>0)
            pos++;
        else if(t<0)
            neg++;
    }
    cout<<"Even: "<<evn<<endl<<"Odd: "<<odd<<endl<<"Positive: "<<pos<<endl<<"Negative: "<<neg<<endl;
}
