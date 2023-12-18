#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i;
    cin>>a;
    int coun=0, arr[100000];
    for(i=0; i<a; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<a; i++)
    {
        if(arr[i]  != arr[i+1])
            coun++;
    }
    cout<<coun<<endl;

}
