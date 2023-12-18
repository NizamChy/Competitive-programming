#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int one=0,zero=0;
    for(int i=0; i<s.size(); i++)
    {
        if(one ==7 || zero ==7)
            break;
        if(s[i] == '1')
        {
            one++;
        }
        else
        {
//            if(one<7)
//            {
                one=0;
//            }

        }
        if(s[i] == '0')
        {
            zero++;
        }
        else
        {
//            if(one<7)
//            {
                zero=0;
//            }

        }
    }
    //  cout<<one<<endl<<zero;
    if(one >= 7 || zero >= 7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
