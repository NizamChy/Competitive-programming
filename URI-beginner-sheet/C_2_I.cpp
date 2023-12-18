#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double fi;
    if(n%2==0)
        fi = n/2;
    else
        fi = n/2+1;

    int cnt = 1,uncnt = 0;
    for(int i = 0; i<n; i++)
    {
        int a;
        cin >> a;
        if(a>0)
            cnt++;
        else if(a<0)
            uncnt++;
    }
        if(cnt>=fi)
        cout<<cnt<<endl;
//    else if(uncnt>=fi)
//        cout<<-2<<endl;
    else
        cout<<0<<endl;






//    if(cnt>=fi)
//        cout<<2<<endl;
//    else if(uncnt>=fi)
//        cout<<-2<<endl;
//    else
//        cout<<0<<endl;
}


