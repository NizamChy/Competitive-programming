#include<bits/stdc++.h>
using namespace std;

double meanAV(double b[], int x)
{
    double sum=0,mean;
    int a[1001];
    for(int i=0; i<x; i++)
    {
        sum += b[i];
    }
// return sum/x;
    mean =sum/x;
    return mean;
}

int main()
{
    int n;
    double avg;
    cin>>n;
    double ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    avg = meanAV(ar, n);
    cout<<setprecision(7)<<avg<<endl;
}
