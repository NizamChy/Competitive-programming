#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a;
    double b,c;
    cin>>b;
    a=b;

    c=b-a;
    b=b-a;

    if(c==0)
    {
        cout<<"int " <<a;
    }
    else cout<<"float "<<a <<" "<<c;

}
