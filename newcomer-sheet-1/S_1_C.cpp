#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int X,Y,sum,mul,sub;
    cin >>X >>Y;

    sum = X+Y;
    mul = X*Y;
    sub = X-Y;

    cout<<X <<" + " <<Y <<" = " <<sum <<endl;
    cout<<X <<" * " <<Y <<" = " <<mul <<endl;
    cout<<X <<" - " <<Y <<" = " <<sub;

}
