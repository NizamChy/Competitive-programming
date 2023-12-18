#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x,y,z;
    char s, e;
    cin>>a >>s >>b >>e >>c;
    x=a+b;
    y=a-b;
    z=a*b;

    switch(s)
    {
    case '+':
        if(c==x)
            cout<<"Yes";
            else cout<<a+b;
        break;

        case '-':
        if(c==y)
            cout<<"Yes";
            else cout<<a-b;
        break;

        case '*':
        if(c==z)
            cout<<"Yes";
            else cout<<a*b;
        break;


    }
}
