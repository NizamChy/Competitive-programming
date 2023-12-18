#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,i,flag=0;
    cin>>a>>b;
    for(i=a; i<=b; i++)
    {
        if(i%10 != 4 || i%10 != 7)
        {

            flag=0;
            i=i/10;
        }
        else
        {
            cout<<i<<" ";

            flag++;
        }
    }
//    if(flag==0)
//        cout<<"-1";

}
