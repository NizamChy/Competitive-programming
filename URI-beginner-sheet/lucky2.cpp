#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0;
    cin>>a>>b;
    for(int i=a; i<=b; i++)
    {
        int n=i;
        int flag =0;
        while(n != 0)
        {
            int ans=n%10;
            n /= 10;
            if(ans == 4 && ans ==7)
                flag = 1;

        }
        if(flag == 1)
        {
            c=1;
            cout<<i<<" ";
        }
    }
    if(c==0)
        cout<<"-1";

}

