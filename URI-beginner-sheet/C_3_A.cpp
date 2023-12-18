#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, temp;
    cin>>a>>b>>c>>d;
    if(abs(a-c) <= d)
        cout<<"Yes";
    else if( abs(a-b) <= d && abs(b-c) <= d)
        cout<<"Yes";
    else
        cout<<"No";
}


//# include<bits/stdc++.h>
//using namespace std;
//int main ()
//{
//    int a,b,c,d;
//    cin >>a>>b>>c>>d;
//    if( abs (a-c) <= d || ( abs (a-b) <= d && abs(b-c) <= d))
//        cout<<"Yes";
//    else
//        cout<<"No";;
//}









//    if(a>b && b>c)
//    {
//        if(a-b <=d || b-c <= d)
//            cout<<"Yes";
//    }
//    else if(c>b && b>a)
//    {
//        if(c-b <=d || b-a <= d)
//            cout<<"Yes";
//    }
//    else if(b>a && c>a)
//    {
//        if(b-a <= d || c-a <= d)
//            cout<<"Yes";
//    }
//    else if(a>c && c>b)
//    {
//        if(a-c <= d || c-b <= d)
//            cout<<"Yes";
//    }
//    else
//        cout<<"No";
//}



//    if(c>a)
//    {
//        temp=a;
//        a=c;
//        c=temp;
//    }

