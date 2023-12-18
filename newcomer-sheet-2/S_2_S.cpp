#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,sum,t;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>a >>b;
        if(a<b)
        {
            for(i=a+1; i<b; i++)
            {
                if(i%2!=0)
                {
                    //cout<<i<<" ";
                    sum=sum+i;
                }
            }
            cout<<sum<<endl;
        }
        else  if(a>b)
        {
            for(i=b+1; i<a; i++)
            {
                if(i%2!=0)
                {
                    //cout<<i<<" ";
                    sum=sum+i;
                }
            }
            cout<<sum<<endl;
        }
        else
            cout<<"0"<<endl;
    }

}
