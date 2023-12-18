#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,count=0;
    cin>>a;
    int host[a], guest[a];
    for(int i=0; i<a; i++)
    {
        cin>>host[i]>>guest[i];
        //cout<<host[i]<<"  "<<guest[i]<<endl;
    }
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<a; j++)
        {
            if(host[i]==guest[j])
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
}
