#include<bits/stdc++.h>
using namespace std;
int main()
{
    //  /*
    int n,i,temp,j,m;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                //   for(m=0; m < n; m++) //for real time sorted array
                //     cout<<arr[m];
                //       cout<<endl;
            }
        }
        cout<<arr[i]<<" ";
    }
    //  */

    //by sorting function
//    int a;
//    cin>>a;
//    int arr[a];
//    for(int i=0; i<a; i++)
//    {
//        cin>>arr[i];
//    }
//    sort(arr,arr+a);
//    for(int i=0; i<a; i++)
//    {
//        cout<<arr[i]<<" ";
//    }
}
