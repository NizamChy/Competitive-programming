#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, A[100000],i;

    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>A[i];
    }
    for(i=0; i<n; i++)
    {
        if(A[i]<=10)
        {
             cout<<"A[" <<i <<"] = " <<A[i] <<endl;
        }

    }

}
