#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,Anton=0, Danik=0;
    char c;
    cin>>a;
    while(a--)
    {
        cin>>c;
        if(c=='A')
        {
            Anton++;
        }
        else
        {
            Danik++;
        }
    }
    if(Anton>Danik)
    {
        cout<<"Anton"<<endl;
    }
    else if(Anton<Danik)
    {
        cout<<"Danik"<<endl;
    }
    else
        cout<<"Friendship"<<endl;
}
