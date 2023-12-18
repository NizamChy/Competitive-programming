#include<bits/stdc++.h>
using namespace std;

int main()
{
    long double a,b,f,c,r,ans;
    cin>>a>>b;

    ans = (double)a/b;

    f=floor(ans);
    c=ceil(ans);
    r=round(ans);

    //floor 10 / 4 = 2
    cout<<"floor " <<a <<" / " <<b <<" = " <<f <<endl;
    cout<<"ceil " <<a <<" / " <<b <<" = " <<c<<endl;
    cout<<"round " <<a <<" / " <<b <<" = " <<r<<endl;

}
