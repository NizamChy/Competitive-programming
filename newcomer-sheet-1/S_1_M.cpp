#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[2];
    int i,capital,small,digit;
    i=capital=small=digit=0;
    gets(ch);

        if(ch[i]>=65  &&  ch[i]<=90)
            cout<<"ALPHA"<<endl<<"IS CAPITAL";
        else if(ch[i]>=97  &&  ch[i]<=122)
            cout<<"ALPHA"<<endl<<"IS SMALL";
         else if(ch[i]>=48 &&  ch[i]<=57)
            cout<<"IS DIGIT";

}
