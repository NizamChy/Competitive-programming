#include <bits/stdc++.h>

using namespace std;

int main()
{
    int  s;
    cin>>s;
    for(int i=0; i<s; i++)
    {
        string s;
        cin>>s;
        string real ="hackerrank";
        int cnt=0;
        for(int i=0; i < s.size() && cnt < real.size(); i++)
        {
            if(s[i] == real[cnt])
            {
                cnt++;
            }
        }
            if(cnt == real.size())
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }

    }
}
