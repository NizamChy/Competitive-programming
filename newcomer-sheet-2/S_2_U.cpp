///Bismillahir Rahmanir Rahim
///Problem V
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=1; i<=4*n-1; i+=4)
    {
        for(j=i; j<=i+2; j++)
        {
            cout<<j<<" ";
        }
        cout<<"PUM"<<endl;
    }
}
