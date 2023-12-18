#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main ()
{
    int r, c;
    cin>>r>>c;
    int turn=0,i=1;
    while(true) //for(;;)
    {
        if(r-i ==0)break;
        if(c-i ==0)break;
        i++;
        turn++;
    }
    if(turn%2 == 0)
        cout<<"Akshat"<<endl;
    else
        cout<<"Malvika"<<endl;


}
