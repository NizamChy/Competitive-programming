#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,t,flag=0;
    cin>>k>>l>>m>>n>>t;
    for(int i=1; i<=t; i++)
    {
        if(i%k == 0 || i%l==0 || i%m==0 ||i%n==0)
        {
            flag++;
        }
    }
    cout<<flag<<endl;
}
