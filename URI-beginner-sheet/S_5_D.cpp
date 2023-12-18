#include<bits/stdc++.h>
using namespace std;
bool checkPrime(int);
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(checkPrime(n))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
bool checkPrime(int n)
{
    bool isPrime = true;
    if(n == 0 || n == 1)
    {
        isPrime = false;
    }
    else
    {
        for(int i=2; i<=sqrt(n); i++)
        {
            if(n%i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}



///same another
//#include<bits/stdc++.h>
//using namespace std;
//
//int checkPrime(int number)
//{
//    int count = 0;
//
//    for(int i=2; i<=number/2; i++)
//    {
//        if(number%i == 0)
//        {
//            count=1;
//            break;
//        }
//    }
//
//    if(number == 1) count = 1;
//
//    return count;
//}
//
//int main()
//{
//    int number ;
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        printf("Enter number: ");
//        scanf("%d",&number);
//
//        if(checkPrime(number) == 0)
//            printf("%d is a prime number.", number);
//        else
//            printf("%d is not a prime number.", number);
//
//    }
//
//    return 0;
//}










