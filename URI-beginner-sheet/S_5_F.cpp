#include<bits/stdc++.h>
using namespace std;
void eqn(int x, int n)
{
    int s=1,i;
    if(x==0 || n==0 || n==1 && x==1)
        cout<<"0"<<endl;
    else if(x==1 || n==2)
        cout<<"1"<<endl;
    else
    {
        for(i=0; i<=n; i++)
        {
            if(i%2==0)
            {
                s=s+pow(x, i);
            }
        }
        cout<<s;
    }
}
int main()
{
    int x,n;
    cin>>x>>n;

    eqn(x, n);
}




//#include<bits/stdc++.h>
//using namespace std;
//void eqn(int x, int n)
//{
//    int s=0;
//   // if(x==0 && n==0 || x==0 && n==1)
//    if(x==0 || n==0 || n==1 && x==1)
//        cout<<"0"<<endl;
//    else if(x==1 || n==2)
//        cout<<"1"<<endl;
//    else
//    {
//        for(int i=0; i<=n; i+=2)
//        {
//            s=s+pow(x, i);
//        }
//        cout<<s;
//    }
//}
//int main()
//{
//    int x,n;
//    cin>>x>>n;
//
//    eqn(x, n);
//}
