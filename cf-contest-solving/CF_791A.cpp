#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main ()
{
    int a,b,i;
    cin>>a>>b;
    for(i=1 ; ; i++)
    {
        a=a*3;
        b=b*2;
        if(a>b)
            break;
    }
    cout<<i<<endl;
}
