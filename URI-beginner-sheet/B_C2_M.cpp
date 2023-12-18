#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,num;
    cin>>t;
    int sum=0, count =0;
    ///8
   ///1  -1 1 -1 -1 1 1 1
   ///1   2  3  4  5  6 7 8
    while(t--)
    {
        cin>>num;
        if(sum+num < 0)
        {
            count++;
        }
        else
        {
            sum = sum+num;
        }

    }
    cout<<count<<endl;

}
//    int t,coun=0;
//    cin>>t;
//    int a[100000];
//    for(int i=0; i<t; i++)
//    {
//        cin>>a[i];
//        //if(a[i] < 1 && a[i-1] < 1)
//        if(a[i+1] < 1 && a[i-1] < 1)
//        {
//            coun++;
//        }
//    } cout<<coun;

