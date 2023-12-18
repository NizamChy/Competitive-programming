#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,arr[100001],i;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        cin>>arr[i];
    }

    for(i=1; i<=n; i++)
    {
        if(arr[i]==0)
        {
            cout<<"0 ";
        }
        else if(arr[i]>0)
        {
            cout<<"1 ";
        }
        else if(arr[i]<0)
        {
            cout<<"2 ";
        }
    }


}
