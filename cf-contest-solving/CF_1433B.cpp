#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
///Binary Search
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0; i<n; i++)
            cin>>ar[i];

        int j=n-1;
        while(j>0)
        {
            if(ar[j] == 1)
                break;
            else j--;
        }
        int i=0;
        while(i<n)
        {
            if(ar[i] == 1)
                break;
            else i++;
        }
        int cnt = 0;
        for(int k=i; k<=j; k++)
        {
            if(ar[k] == 0)
                cnt++;
        }
        cout<<cnt<<endl;
    }

}
