#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,ma;
    int max1, max2;

    int n;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    max1 = max2 = INT_MIN;

    for(i=0; i<n; i++)
    {
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }

    for(i=0; i<n; i++)
    {
        if(arr[i] == max2)
        {
            cout<<i+1;
        }
    }
    return 0;
}

