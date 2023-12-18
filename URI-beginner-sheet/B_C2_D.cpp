#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,sum=0,a1,a2,a3;
    cin>>a;
    while(a--)
    {
        cin>>a1>>a2>>a3;
        if(a1+a2+a3 >=2 )
        {
            sum++;
        }
    } cout<<sum<<endl;
}
