#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,temp,i;

    while(true)
    {
        int ans=0;
        cin>>a>>b;
        if(a<=0 || b<=0)
            break;
        else
        {
            if(a>b)
            {
                temp=a;
                a=b;
                b=temp;
            }
            for( i=a; i<=b; i++)
            {
                cout<<i<<" ";
                ans+=i;
            }
            cout<<"sum ="<<ans<<endl;
        }
    }

}





