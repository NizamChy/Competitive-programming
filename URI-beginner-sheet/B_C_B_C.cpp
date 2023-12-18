#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, num[300];
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;

        for(int i = 1; i <= n; i++)
        {
            string s;
            cin>>s;
            for(int i = 0; i < s.size(); i++)
                num[s[i]-'A']++;
        }
        int ok = 1;
        for(int i = 0; i <= 100; i++)
        {
            if(num[i]%n!=0)
            {
                ok = 0;
                break;
            }
        }
        if(ok)
            cout<<"YES"<<endl;
        else
         cout<<"NO"<<endl;
    }

}
