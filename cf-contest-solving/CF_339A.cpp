#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,j,temp;
    for(i=0; i<s.size(); i+=2)
    {
        for(j=0; j<s.size()-1; j+=2)
        {
            if(s[j] > s[j+2])
            {
                ///swap(s[j],s[j+2]);
                temp = s[j];
                s[j] = s[j+2];
                s[j+2] = temp;
            }
        }
    }
    cout<<s<<endl;
}
