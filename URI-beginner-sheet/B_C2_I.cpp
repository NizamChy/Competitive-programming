#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int uc=0,lc=0;
    for(int i=0; i<s.size(); i++)
    {
        if(isupper(s[i]))
        {
            uc++;
        }
        else
        {
            lc++;
        }
    }
    if(lc>=uc)
    {
        for(int i= 0; i<s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        cout<<s<<endl;
    }

    if(lc<uc)
    {
        for(int i= 0; i<s.size(); i++)
        {
            s[i] = toupper(s[i]);
        }
        cout<<s<<endl;
    }


}
