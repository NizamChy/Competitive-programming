#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100001];
    int count=1;
    cin >> str;
    for(int i=1; i<=strlen(str); i++)
    {
        if(str[i]>='A' && str[i]<= 'Z' )
        {
            count++;
        }
    }
    cout<<count;
}

