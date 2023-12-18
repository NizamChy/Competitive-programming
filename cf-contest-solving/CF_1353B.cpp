#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int a,b;
        cin>>a>>b;
        int ar1[a], ar2[a], sum1=0;
        for(int i=0; i<a; i++)
        {
            cin>>ar1[i];
            sum1 += ar1[i];
        }
        for(int i=0; i<a; i++)
        {
            cin>>ar2[i];
        }
        sort(ar1, ar1+a);
        sort(ar2, ar2+a);
        reverse(ar2, ar2+a);
        int n=0;
        for(int i=0; i<a; i++)
        {
            if(ar1[i] < ar2[i])
            {
                swap(ar1[i], ar2[i]);
                n++;
                if(n==b)
                    break;
            }
        }
        int sum2=0;
        for(int i=0; i<a; i++)
        {
            sum2 += ar1[i];
        }

        if(b==0)
            cout<<sum1<<endl;
        else
            cout<<sum2<<endl;
    }

}
