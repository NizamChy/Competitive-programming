#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    int q;
    cin>>q;
    while(q--)
    {
        int k;
        cin>>k;
        while(q<n)
        {
            int mid =(q+n)/2;
            if(a[mid] <= k)
            {
                q=mid+1;
            }
            else
                n=mid;
        }
        cout<<q<<endl;
    }
}

/*
int main()
{
    int t;
    cin>>t;
    int shops[t];
    for(int i=1; i<=t; i++)
    {
        cin>>shops[i];
    }
    sort(shops, shops+t);

//    for(int i=0; i<t; i++)
//    {
//        cout<<shops[i]<<" ";
//    }
    int days; //count=0;
    cin>>days;
    int coins[days];
//    for(int i=0; i<days; i++)
//    {
//        cin>>coins[i];
//    }
    for(int i=1; i<=days; i++)
    {

        cin>>coins[i];

        for(int i=1; i<=t; i++)
        {

            if(coins[i] >= shops[i])
            {
                count++;
            }
        }
        cout<<count<<endl;

    }

}
*/




