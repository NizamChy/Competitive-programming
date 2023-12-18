#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,coun=0,flag=0;
    cin>>a>>b;
    while(a--)
    {
        cin>>c;
        if(c<=b)
        {
            coun++;
        }
        else
        {
            flag+=2;
        }
    }

    cout<<coun+flag<<endl;
}
