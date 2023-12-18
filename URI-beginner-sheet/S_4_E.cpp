#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int sum=0,i,a;
    for(i=0; i<s.size(); i++)
    {
        //a=s[i];
        //sum+=s[i]-0;
        sum+=s[i]-48;
    }
    cout<<sum;

}
