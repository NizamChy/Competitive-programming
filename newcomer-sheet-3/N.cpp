#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, i,k=0;
    cin >> a >>b;
    //cout<<a <<b;

    string s;
    cin>>s;
    for(i=0; s[i]!='\0'; i++)
    {
        int j = i+1;
         char c;
        if(s[i]=='-' && s[j]!='\0'  && s[j]!='-')
            k=1;
//            for(i=i+1; s[i]!='\0'; i++)
//            {
//                if(s[i]=='-')
//                k=0;
//                break;
//            }

    }
    if(k==1)
    {
//        int x;
//        x=s[i]+2;
        cout<<"Yes";
    }
    else
        cout<<"No";



    /*
     string s;
     cin>> s;
     int i ;
     //cout<<s;
     if(i = (s.length() / 2)-1 == '-')
         cout<<"Yes";
     else
         cout<<"No";
     */

}
