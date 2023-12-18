#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main ()
{
    string s;
    cin>>s;
    string h="hello";
    int c=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == h[c])
        {
            c++;
        }
    }
    if(c==5)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;


}
