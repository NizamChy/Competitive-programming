///codeforces problem - 381A - Sereja and Dima
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int sereja=0, dima=0,left=0,right=n-1;

    int turn=0;
    while(left<=right)
    {
        if(turn%2 == 0)
        {
            if(arr[left] > arr[right])
            {
                sereja += arr[left];
                left++;
            }
            else
            {
                sereja += arr[right];
                right--;
            }
        }
        else
        {
            if(arr[left] > arr[right])
            {
                dima += arr[left];
                left++;
            }
            else
            {
                dima += arr[right];
                right--;
            }
        }
        turn++;
    }
    cout<<sereja<<" "<<dima;

}
