#include<bits/stdc++.h>
using namespace std;
int main()
{
    int first=0, second =1,cnt=0,fibo,n;
    cin>>n;
    while(cnt<n)
    {
        if(cnt<=1)
        {
            fibo=cnt;
        }
        else
        {
            fibo =first+second;
            first=second;
            second=fibo;
        }

        cnt++;
    }
    cout<<fibo<<" ";

}



