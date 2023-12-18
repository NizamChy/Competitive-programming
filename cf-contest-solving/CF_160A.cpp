#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int ar[a];
    int sum=0, sum2=0, count=0;
    for(int i=0; i<a; i++)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    sum=sum/2;
    sort(ar, ar+a);
    for(int j=a-1; j >= 0; j--)
    {
        sum2 += ar[j];
        count++;
        if(sum<sum2)
            break;
    }
    cout<<count;
}
