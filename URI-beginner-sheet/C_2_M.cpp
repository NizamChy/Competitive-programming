#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    int i,n,len;

    cin>>len;
    cin >> str;
    cin>>n;
    n=n % 26;
    //len=strlen(str);

    while(str[i] != '\0')
    //while(str[i] != len)
    {
        if (isalpha(str[i]))
        {
        if(str[i]+n<='Z' && str[i]+n >= 'A' || str[i]+n<='z' && str[i] >= 'a')
        {
            str[i]=str[i]+n;
        }
        else if(str[i]+n>'Z')
        {
            int x = (str[i]+n)-'Z';
            str[i]='A'+(x-1);
        }

        else if(str[i]+n>'z')
        {
            int y = (str[i]+n)-'z';
            str[i]='a'+(y-1);
        }
        }

        else
        {
            str[i]=str[i];
       }
        i++;
    }
    cout<<str<<endl;
}


