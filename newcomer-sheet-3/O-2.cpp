#include<bits/stdc++.h>
using namespace std;

int fib(int);
int main()
{
    int n, i=0, c;
    cin>>n;

   for(c=1; c<=n; c++)
    {
        cout<<fib(i)<<endl;
        i++;
   }
    return 0;
}

int fib(int n)
{
    if(n==0 || n == 1)
        return n;
    else
        return (fib(n-1) + fib(n-2));
}









