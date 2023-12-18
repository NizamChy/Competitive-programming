#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main()
{
    int a;
    cin>>a;
    if(a%5 == 0)
    {
        cout<<a/5;
    }
    else
        cout<<(a/5)+1;
}
/*
int main()
{
    ll n, ans;
    cin>>n;

    if(n%5 == 0)
    {
        ans=n/5;
        // cout<<ans<<endl;
    }
    else
    {
        //r = n%5;
        ans = n/5;
        if(n%5 != 0)
        {
            //ans = (r%4)
            ans+=ans/4;
            if(ans%4 !=0)
            {
                //r=r%3;
                ans+=ans/3;
                if(ans%3 != 0)
                {
                    //r=r%2;
                    ans+=ans/2;
                    if(ans%2 != 0)
                    {
                        //r=r%1;
                        ans+=ans/1;

                    }
                }
            }
        }
    }
    cout<<ans<<endl;
}
int main ()
{
    ll n,ans;
    cin>>n;
    if(n%5 == 0)
    {
        ans=n/5;
    }
    else if(n%4 == 0)
    {
        ans=n/4;
    }
    else if(n%3 == 0)
    {
        ans=n/3;
    }
    else if(n%2 == 0)
    {
        ans=n/2;
    }
    else if(n%1 == 0)
    {
        ans=n/1;
    }

    cout<<ans;

}
*/
