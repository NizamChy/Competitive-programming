#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,temp,i,t;
    cin>>t;
    while(t--)
    {
        int ans=0;
        cin>>a>>b;
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        for(i=a+1; i<b; i++)
        {
            if(i%2!=0)
            {
                ans+=i;
            }
        }
        cout<<ans<<endl;
    }

}





