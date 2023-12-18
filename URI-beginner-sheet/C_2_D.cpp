#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[10001],p;
    int i,n;
    cin>>n;
    cin >> str;

    while(str[i] != '\0')
    {
        if(str[i]+n<='Z')
        {
          str[i]=str[i]+n;
        }
        else if(str[i]+n>'Z')
        {
            int x = (str[i]+n)-'Z';
            str[i]='A'+(x-1);
        }

        i++;
    }

    cout<<str;
}

