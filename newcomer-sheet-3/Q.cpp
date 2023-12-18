#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,n,k,l,m,x,f=0,count=0;
    int arr1[100000],arr2[100000];
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        for(j=1; j<=n; j++)
        {
            cin>>arr1[j];
        }
        for(k=1; k<=n; k++)
        {
            for(l=1; l<=n-k+1; l++)
            {
                for(m=1, x=l; m<=k; m++,x++)
                {
                    arr2[m]=arr1[x];
                }
                for(m=1; m<k; m++)
                {
                    if(arr2[m] > arr2[m+1])
                    {
                        f=1;
                        break;
                    }
                }
                if(f==0)
                    count++;
                f=0;
            }
        }
        cout<<count<<endl;
        count=0;
    }
}
