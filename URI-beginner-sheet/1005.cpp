#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, SOMA,avg;
    cin>>a >>b;
    SOMA = (a*3.5)+(b*7.5);
    avg= SOMA/(3.5+7.5);
    cout<<fixed;
    cout<<"MEDIA = "<<setprecision(5) <<avg<<endl;
}
