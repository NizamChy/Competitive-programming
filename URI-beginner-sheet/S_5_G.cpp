#include<bits/stdc++.h>
using namespace std;

int myMax(int x[], int s)
{
    int i, max;
    max = x[0];
    for(i=0; i<s; i++)
    {
        if(x[i] > max)
            max= x[i];
    }
    return max;
}
int myMin(int x[], int s)
{
    int i, min;
    min = x[0];
    for(i=0; i<s; i++)
    {
        if(x[i] < min)
            min = x[i];
    }
    return min;
}
int main()
{
    int n,i,max,min;
    cin>>n;
    int ar[100001];
    for(i=0; i<n; i++)
        cin>>ar[i];
    max = myMax(ar, n);
    min = myMin(ar, n);
    cout<<min<<" "<<max<<endl;
    //cout << myMin(ar, n)<< " "<<myMax(ar, n);

}

