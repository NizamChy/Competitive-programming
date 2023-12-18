#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int l1=a.size();
    int l2=b.size();
    string con=a+b;
    int temp;
    for(int i=0; i<l1+l2; i++)
    {
        if(i==0)
        {
            temp = a[i];
            a[i] = b[i];
            b[i] = temp;
        }
//        else
//        a[i] = a[i];
//        b[i] = b[i];
    }
    cout<<l1<<" "<<l2<<endl;
    cout<<con<<endl;
    cout<<a<<" "<<b<<endl;
}
