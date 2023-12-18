#include<bits/stdc++.h>
using namespace std;

void my_swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x,y;
    cin>>x>>y;
   //cout<<x<<" "<<y<<endl;
    my_swap(x, y);
    cout<<x<<" "<<y<<endl;
}

//#include<stdio.h>
//
//void swap(int, int);
//
//int main()
//{
//    int a, b;
//
//    printf("Enter values for a and b\n");
//    scanf("%d%d", &a, &b);
//
//    printf("\n\nBefore swapping: a = %d and b = %d\n", a, b);
//
//    swap(a, b);
//
//    return 0;
//}
//
//void swap(int x, int y)
//{
//    int temp;
//
//    temp = x;
//    x    = y;
//    y    = temp;
//
//    printf("\nAfter swapping: a = %d and b = %d\n", x, y);
//}

///using swap function
//void my_swap(int &a, int &b)
//{
//    swap(a, b);
//    cout << "Value of a now: " << a << endl;
//    cout << "Value of b now: " << b << endl;
//}



