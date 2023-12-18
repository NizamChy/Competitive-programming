#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s2;
    cin>>s;
    int n = s.length();
    for(int i=0; i<n; i++)
    {
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u' ||s[i]=='y' ||s[i]=='Y' || s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U')
        {
            continue;
        }
        else
        {
            s2 += '.';
            s2 += tolower(s[i]);
        }
    }
    cout << s2<<endl;

}
