#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n - 4 << " 4";
    }
    else
    {
        cout << n - 9 << " 9";
    }
}
//    int n,c=0,i,j;
//    cin>>n;
//    for(i=2; i<n; i++)
//    {
//        for(j=2; j<n; j++)
//        {
//                if(i+j == n)
//                {
//                  c=1;
//                break;
//                }
//
//        }
//    } cout<<i<<" "<<j;
//
