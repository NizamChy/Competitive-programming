#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j, k, temp, sum;
    int a[13];
    cin>>k;

    for(i=1; i<=12; i++)
    {
        cin>>a[i];
    }
    for(i=1; i<=12; i++)
    {
        for(j=i; j<=12; j++)
        {
            if(a[i]<a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    if(k==0)
    {
        cout<<"0\n";
    }
    else
    {
        sum=0;
        for(i=1; i<=12; i++)
        {
            sum+=a[i];
            if(sum>=k)
            {
                cout<<i<<endl;
                break;
            }
        }
        if(i==13)
        {
            cout<<"-1\n";
        }
    }

}
