#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,rem,t1,t2;
    cin>>a >>b;
    t1=a;
    t2=b;
    while(t2!=0)
    {
        rem=t1%t2; //rem=24%54=6
        t1=t2;//t1=54,,,
        t2=rem;//6
    }
    cout<<t1<<endl;
}
