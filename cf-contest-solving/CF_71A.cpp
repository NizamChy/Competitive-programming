//https://codeforces.com/problemset/problem/71/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        if(s.size() > 10)
        {
            int last = s.size();
            int len = s.size() - 2;
            cout<<s[0]<<len<<s[last-1]<<endl;
        }
        else
            cout<<s<<endl;
    }
}
