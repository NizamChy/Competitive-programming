#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main ()
{
    int t,i,x=0;
    cin>>t;
    int n[t];
    for(i=0; i<t; i++)
    {
        cin>>n[i];
    }
    for(i=0; i<t; i++)
    {
        if(n[i] % 3 == 0 || n[i] % 3 == 3)
        {
            x++;
            continue;
        }
        else if(n[i] != 100 && n[i] != 1000)
            cout<<n[i]<<endl;
    }

    for(int i=0; i<x; i++)
    {
        if(n[i] / 3 == 0)
        {
            cout<<"10"<<endl;

        }

        if(n[i] / 3 == 2)
        {
            cout<<"11"<<endl;

        }

    }

}
