#include<bits/stdc++.h>
using namespace std;

void distinct(int x[], int t)
{
    int count =0;
    for(int i=0; i<t; i++)
    {
        if(x[i] != x[i+1])
        {
            count++;
        }
    }
    cout<<count<<endl;
}
int main()
{
    int t;
    cin>>t;
    int a[t];
    for(int i=0; i<t; i++)
    {
        cin>>a[i];
    }
    sort(a, a + t);
//    for(int i=0; i<t; i++)
//    {
//        cout<<a[i]<<" ";
//    }
    distinct(a, t);
}
