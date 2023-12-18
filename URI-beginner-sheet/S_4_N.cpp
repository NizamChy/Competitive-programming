#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main ()
{
    string s;
    int n,c=0;
    cin>>n;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        if(s[i] != s[i+1])
        {
            c++;
        }
    }
    cout<<c;
}
