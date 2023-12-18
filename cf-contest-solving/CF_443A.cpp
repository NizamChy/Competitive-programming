#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    //cout<<s;
    sort(s.begin(), s.end());
    //cout<<s;
    int flag=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '{' || s[i] == '}' || s[i] == ',' || s[i] == ' ' )
            {
                continue;
            }
            else
            {
                if(s[i] != s[i+1])
                {
                    flag++;
                }
            }
    }
    cout<<flag<<endl;

}
