#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x=0, y=n-1;
        while(s[x] == '0' && x<n )
            x++;
        while(s[y] == '1' && y>=0 )
            y--;
        if(y<x)
        {
            cout<<s<<endl;
        }
        else
        {
            string ans=" ";
            for(int i=0; i<x; i++) ans+='0';
                ans +='0';

            for(int i=y; i<n-1; i++) ans+='1';

            cout<<ans<<endl;
        }
    }



}
