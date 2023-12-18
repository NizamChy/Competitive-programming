///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    for(i=n; i>=1; i--)//ekhanei change ta hobe
    {
        for(j=1; j<=i; j++)
        {
            cout<<"*";
        }cout<<endl;
    }
}
