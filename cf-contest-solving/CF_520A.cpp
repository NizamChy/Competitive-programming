#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main()
{
    int a;
    cin>>a;

    string s;
    cin>>s;
    for(int i=0; i<a; i++)
    {
        s[i] = tolower(s[i]);
    }
    sort(s.begin(),s.end());
//    for(int i=0; i<a; i++)
//    {
//        cout<<s[i]<<" " ;
//    }
//    cout<<endl;
    int cnt=0;
    for(int j=0; j<a; j++)
    {
        if(s[j+1] != s[j])
        {
            cnt++;
        }
    }
//    cout<<cnt<<endl;
    if(cnt >= 26)
        cout<<"YES";
    else
        cout<<"NO" ;

}
