#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10],n, i, count1;
    cout<<"Enter the number to convert : ";
    cin>>n;

    for(i=0; n>0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    cout<<"Binary of the given number : ";
    for(i = i-1; i>=0; i--)
    {
        cout<<a[i];

    }
    while(a[i]>0)
    {
        if(a[i] & 1)
            count1++;
    }
    a[i] >> 1;
    cout<<count1;

}

