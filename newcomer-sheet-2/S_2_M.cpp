#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i;
    cin>>a >>b;

    if(a<4 && b<4 || a>7 && b<47 ||a>47 && a<744)
    {
        cout<<"-1";
    }
    else if(a>3 && b>3)
    {
//        for(i=a; i<=b; i++)
//        {
        if(b==4)
            cout<<"4";
        else if(a>3 && b<5)
            cout<<"4";
        else if(a==4 && b<5)
            cout<<"4";
        else if(a==4 && b<46)
            cout<<"4 7";
        else if(a==4 && b<743)
            cout<<"4 7 47";
        else if(a==4 && b>743)
            cout<<"4 7 47 744";
//else if(a>3 && b<5)
        // cout<<"4";
        else if(a==4 && b<5)
            cout<<"4";
        else if(a==7 && b<46)
            cout<<"7";
        else if(a==7 && b<743)
            cout<<"7 47";
        else if(a==7 && b>743)
            cout<<"7 47 744";

//else if(a==47 && b<46)
//                cout<<"47";
        else if(a==47 && b<743)
            cout<<"47";
        else if(a==47 && b>743)
            cout<<"7 47 744";


        // }
    }


}
