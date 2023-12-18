#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main()
{
    long long n,k,i,j;
    cin>>n>>k;
    if(n%2 == 0)
    {
        i=n/2;
    }
    else
    {
        i=(n+1)/2;
    }
    if(k <= i)
    {
        cout<<(k*2)-1;
    }
    else
    {
        cout<<(k-i)*2;
    }

}
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//
//int main()
//{
//    ll n,k,i,j,cnt=0;
//    cin>>n>>k;
//
//    for(i=1; i<=n; i+=2)
//    {
//        cnt++;
//        if(cnt == k)
//        {
//            cout<<i<<endl;
//            break;
//        }
//    }
//    for(j=2; j<=n; j+=2)
//    {
//        cnt++;
//        if(cnt == k)
//        {
//            cout<<j<<endl;
//            break;
//        }
//    }
//}
