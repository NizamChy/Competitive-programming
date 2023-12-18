#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n,coun=0;
    cin>>t>>n;
    int a[100];

    for(int i =0; i<t; i++)
    {
        cin>>a[i];
    }
    for(int i =0; i<t; i++)
    {
        //int c = a[n];
        if(a[i] > 0)
        {
            if(a[i] >= a[n-1] )
            {
                coun++;
            }
        }
    }
    cout<<coun<<endl;
}
