#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main ()
{
    string s;
    cin>>s;
    int cnt=0;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '4' || s[i] == '7' )
        {
            cnt++;
        }
    }
    if(cnt == 4 || cnt ==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


}
