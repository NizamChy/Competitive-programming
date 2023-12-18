#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,x,months,days,years;
    cin>>a;

   years=a/365;
   x=a%365;
   months= x/30;
   days=x%30;

    cout<<years<<" years"<<endl;

    cout<<months<<" months"<<endl;

    cout<<days<<" days"<<endl;

}
