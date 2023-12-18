#include<bits/stdc++.h>
using namespace std;
int main()
{
    int prb, mint,sum=0,cansolve=0;
    cin>>prb>>mint;
    int rest = 240 - mint;
    for(int i=1; i<=prb; i++)
    {
        sum += 5 * i;
        if(sum > rest)
            break;
        cansolve++;
    }
    cout<<cansolve<<endl;
}
