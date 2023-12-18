#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  m,n,a;
    cin>>m>>n>>a;
    long double ans =((double)m/a) ;
    long double ans2 = ((double)n/a);
    long long x=ceil(ans);
    long long y=ceil(ans2);
    long long ansf =x*y;
    cout<<ansf<<endl;
}
//int main()
//{
//    long long m,n,a,x,y;
//    cin>>m>>n>>a;
//    if(m%a==0)
//    {
//        x=m/a;
//    }
//    else
//    {
//        x= m/a + 1;
//    }
//    if(n%a==0)
//    {
//        y=m/a;
//    }
//    else
//    {
//        y= m/a + 1;
//    }
//    cout<<x*y<<endl;
//}
