#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,arr[1000],mex;
    cin>>n;

    for(i=1; i<=n; i++)
        cin>>arr[i];
        mex=arr[1];

    for(i=1; i<=n; i++)
    {
        if(mex<arr[i])
            mex=arr[i];
    }
    cout<<mex;
}
