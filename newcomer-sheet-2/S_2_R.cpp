#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,sum,i;

    while(1)
    {
        sum=0;
        cin>>a >>b;
        if(a==b)
            cout<<a <<" sum ="<<a<<endl;
        else if(a<=0 || b<=0)
            break;

        else if(a<b)
        {
            for(i=a; i<=b; i++)
            {
                cout<<i<<" ";
                sum=sum+i;
            }
            cout<<" " <<"sum =" <<sum<<endl;
        }
        else if(a>b)

        {
            for(i=b; i<=a; i++)
            {
                cout<<i<<" ";

                sum=sum+i;
            }
            cout<<" " <<"sum =" <<sum<<endl;
        }
    }

}
