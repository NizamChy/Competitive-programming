#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,k=0,num;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>num;

        x=num/2;
        cout<<x<<endl;
        if(num%2==0)
        {
            k++;
            cout<<k<<endl;
        }
    }


}
