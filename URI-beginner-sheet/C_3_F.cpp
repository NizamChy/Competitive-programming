#include<bits/stdc++.h>
using namespace std;
int main()
{
    int range[1000001];
    int pile=1,i;
    int index =1;
    int worms;
    int p;
    cin>>p;
    while(p-- >= 1)
    {
        cin>>worms;
        for( i = 0; i < worms; i++)
        {
            range[index] = pile;
            index++;
        }
        pile++;
    }
    int x;
    cin>>x;
    while(x-- >= 1)
    {
        cout<<index;
    }
}










//#include <stdio.h> // binarysearch first pass codes. (Refer to the challenge of programming)
//int main()
//{
//    int i,j,n,m,sum=0;
//    scanf("%d",&n);
//    int a[100100],b[100100];   // 5
//    for(i=0; i<n; i++)         // 2 7 3 4 9
//        scanf("%d",&a[i]);     // 2 9 12 16 25
//    scanf("%d",&m);            // 1 25 11
//    for(i=0; i<m; i++)
//        scanf("%d",&b[i]);
//
//    for(i=0; i<n; i++)
//    {
//        sum = + a [i] ; // number of the i + 1 just before the stack insects.
//        a[i]=sum;
//    }
//    for(i=0; i<m; i++)
//    {
//        int l=0,r=n;
//        while(r-l>=1)
//        {
//            j=(l+r)/2;
//            if(a[j]==b[i])
//            {
//                printf("%d\n",j+1);
//                break;
//            }
//            else if(a[j]<b[i])
//            {
//                if(b[i]<=a[j+1])
//                {
//                    printf("%d\n",j+2);
//                    break;
//                }
//                else l=j+1;
//            }
//            else
//            {
//                if(j==0)
//                {
//                    printf("%d\n",j+1);
//                    break;
//                }
//                if(b[i]>a[j-1])
//                {
//                    printf("%d\n",j+1);
//                    break;
//                }
//                else r=j;
//            }
//        }
//    }
//    return 0;
//}
