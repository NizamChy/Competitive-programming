#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, n,m, arr[100001],coun[100001]={0};
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>arr[i];
        if(arr[i]<=m)
            coun[arr[i]]++;
    }
    for(i=1; i<=m; i++)
    {
        cout<<coun[i]<<endl;
    }
}







