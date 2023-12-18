#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,coun=0;
    cin>>n;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            coun++;
            break;
        }
    }
    if(coun==0)
        cout<<"YES";
    else
        cout<<"NO";
}
