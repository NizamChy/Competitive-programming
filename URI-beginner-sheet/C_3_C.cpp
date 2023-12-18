#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int lcm = (a*b)/__gcd(a, b);
    if(lcm <= c)
        cout<<"yes";
    else
        cout<<"no";

}


//{
//    int p, q,s;
//    cin>>p>>q>>s;
//    if(p>=1 && q>=1 && p<=s && q<=s)
//    {
//        if(s%p==0 && s%q==0)
//            cout<<"yes"<<endl;
//        else
//            cout<<"no"<<endl;
//    }
//    else
//        cout<<"no"<<endl;
//
//}
