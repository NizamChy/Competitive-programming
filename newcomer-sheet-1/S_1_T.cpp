#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c;
    cin>>a >>b >>c;
    if(a<b && a<c && b<c )
    {
        cout<<a<<endl <<b <<endl <<c;
    }
    else if(b<a && b<c && c<a )
    {
        cout<<b<<endl <<c <<endl <<a;
    }

    else if(c<a && c<b && b<a )
    {
        cout<<c<<endl <<b <<endl <<a;
    }
    else if(b<a && b<c && a<c )
    {
        cout<<b<<endl <<a <<endl <<c;
    }
    else if(a<b && a<c && c<b )
    {
        cout<<a<<endl <<c <<endl <<b;
    }
    else if(a<b && b<=c )
    {
        cout<<a<<endl <<b <<endl <<c;
    }

    else if(a<=b && b<c && a<c)
    {
        cout<<a<<endl <<b <<endl <<c;
    }
    else if(a==b && b==c && c==a)
    {
        cout<<a<<endl <<b <<endl <<c;
    }
    else if(c<a && c<b && a<b)
    {
        cout<<c <<endl <<a <<endl <<b;
    }
    else if(a==b && c<a && c<b)
    {
        cout<<c<<endl <<a <<endl <<b;
    }
else if(a==c && b<a && b<c)
    {
        cout<<b<<endl <<a <<endl <<c;
    }
else if(b==c && b<a && c<a)
    {
        cout<<b<<endl <<c <<endl <<a;
    }


    cout<<endl;
    cout<<endl<<a<<endl <<b <<endl <<c;
}
