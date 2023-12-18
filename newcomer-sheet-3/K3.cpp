#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long sum =0, k, j, n;
    cin >> n;
    cin >>s;
    for(j=0; s[j]!='\0'; j++) //'\0' refers to the null character
    {
        k=s[j]-'0'; //'0'character value to converted string to integer
        sum = sum + k;
    }
    cout <<sum;
}
