#include<bits/stdc++.h>
using namespace std;

int main()
{
    int g, x,y, a[200], count =0;
    cin>>g>>x;
    for(int i=0; i<x; i++)
    {
        cin>>a[i];
    }
    cin>>y;
    for(int i=x; i<x+y; i++)
    {
        cin>>a[i];
    }
    sort(a, a+(x+y));
    for(int i=0; i<x+y; i++)
    {
        if(a[i] != a[i+1])
        {
            count++;
        }
    }
    if(count==g)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;

}

//int main()
//{
//    int g, x,y,xl,yl,i,c=0,f=0;
//    cin>>g>>x;
//    for(i=0; i<x; i++)
//    {
//        cin>>xl;
//        if(xl>=g)
//        {
//            f=1;
//            break;
//        }
//    }
//    cin>>y;
//    for(i=0; i<y; i++)
//    {
//        cin>>yl;
//        if(yl>=g)
//        {
//            c=1;
//            break;
//        }
//    }
//    if(f==1 || c==1)
//        cout<<"I become the guy."<<endl;
//    else
//        cout<<"Oh, my keyboard!"<<endl;
//}
