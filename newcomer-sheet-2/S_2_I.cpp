#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0,num,r,temp;
    cin>>num;
    temp=num;

    while(temp!=0)
    {
        r = temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    if(sum==num)
        cout<<sum <<endl<<"YES";
    else
        cout<<sum <<endl<<"NO";

}
