#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,ans;
    char s;
    cin>>a>>s>>b;

    switch(s)
    {
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '/':
        cout<<a/b;
        break;

    }

}
