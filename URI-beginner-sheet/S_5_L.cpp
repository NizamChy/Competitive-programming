#include<bits/stdc++.h>
using namespace std;

void printAr(int x[], int y[], int t)
{
    for(int i=0; i<t; i++)
    {
        cout<<x[i]<<" ";
    }

    for(int i=0; i<t; i++)
    {
        cout<<y[i]<<" ";
    }
}
int main()
{
    int t;
    cin>>t;
    int a[t], b[t];
    for(int i=0; i<t; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<t; i++)
    {
        cin>>b[i];
    }
    printAr(b, a, t);

}
