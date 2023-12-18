#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long sum=0,k,j,n;
    cin>>n;
    cin>>s;
    for(j=0; s[j]!='\0'; j++) //'\0' refers to the null character
    {
        k=s[j]-'0';
        sum=sum+k;
    }
    cout<<sum;
    return 0;
}






//using namespace std;
//int main()
//{
//    long long int a[100000],n,temp,r,t,sum=0;
//    cin>>a[n];
//    cin>>n;
//
//    temp=n;
//    while(temp!=0)
//    {
//        r=temp%10;
//        sum=sum+r;
//        temp=temp/10;
//    }
//    cout<<sum;
//}
