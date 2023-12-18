#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[2];
    int i;
    i=0;
    gets(ch);

    if(ch[i]>=65  &&  ch[i]<=90)
    {
        ch[i]=ch[i]+32;
        cout<<ch;
    }

    else if(ch[i]>=97  &&  ch[i]<=122)
    {
        ch[i]=ch[i]-32;
        cout<<ch;
    }

}
