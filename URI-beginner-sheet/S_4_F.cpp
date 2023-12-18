#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;

    while(t--)
    {
        cin>>s;
        int l = s.size(),i,count=0;
        if(l<=10)
            cout<<s<<endl;
        else
        {
            for(i=0; i<l; i++)
            {
                count++;
            }
            cout<<s[0]<<count-2<<s[l-1]<<endl;
        }
    }
}
